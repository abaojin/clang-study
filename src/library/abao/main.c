#include "abao.h"
#include <stdio.h>

void main(){
	VAR_S = 1001;
	// error静态常量不能修改
	// VAR_SC = 1114;
	printf("VAR_S: %d\n", VAR_S);
	printf("VAR_SC: %d\n", VAR_SC);

	char* name = getName();
	int age = getAge();
}