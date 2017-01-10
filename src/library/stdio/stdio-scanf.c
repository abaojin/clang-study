#include <stdio.h>

/**
 * int scanf(const char *format, ...) 从标准输入 stdin 读取格式化输入。
 *
 */

int main(int argc, char const *argv[]) {

	char name[20];
	int age;

	printf("%s\n", "input username:");
	scanf("%s", name);

	printf("%s\n", "input userage:");
	scanf("%d", &age);

	printf("name=%s\n", name);
	printf("age=%d\n", age);

	return 0;
}