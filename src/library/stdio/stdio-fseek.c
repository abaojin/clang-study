#include <stdio.h>


/**
 *	fseek(FILE *stream, long int offset, int whence)
 *
 *	stream--指向FILE对象的指针，指向该FILE对象标识流
 * 	offset--这是相对 whence 的偏移量，以字节为单位
 * 	whence -- 这是表示开始添加偏移 offset 的位置
 */


int main(int argc, char const *argv[]) {
	FILE *fp;

	fp = fopen("file.txt", "w+");
	if(fp == NULL) {
		printf("%s\n", "open file error");
		return;
	}

	fputs("hello world", fp);
	fseek(fp, 6, SEEK_SET);
	fputs("github", fp);

	fclose(fp);

	return 0;
}