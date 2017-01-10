#include <stdio.h>

/**
 * int feof(FILE *stream)
 *
 * 测试给定流 stream 的文件结束标识符
 */

int main(int argc, char const *argv[]) {
	FILE *fp;	

	fp = fopen("file.txt", "r");
	if(fp == NULL){
		printf("%s\n", "open file error");
		return;
	}

	int c;
	while(1) {
	    c = fgetc(fp);
	    if(feof(fp)){
	    	break;
	    }
	    printf("%c", c);
	}

	fclose(fp);

	return 0;
}