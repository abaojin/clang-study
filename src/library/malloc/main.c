#include <stdio.h>
#include <malloc.h>

// 
struct STTest {
    int age;
    char *name;
    char address[5];
};

struct STTestTest {
    int age;
};

int main(int argc, char *argv[]){
    int var = 10;
    int *varp = &var;
    int **varpp = &varp;

    printf("%d\n", varp);
    printf("%d\n", varpp);

    printf("sttest size: %d\n", sizeof(struct STTest));
    printf("sttesttest size : %d\n", sizeof(struct STTestTest));

    struct STTest *st = (struct STTest *)malloc(sizeof(struct STTest));

    printf("ststst size: %d\n", sizeof(st));

    char narray[2];
    char *narrayp = &narray;

    long long varlong = 100;
    long long *varlongp = &varlong;

    printf("narray size: %d\n", sizeof(narray));
    printf("narrayp size: %d\n", sizeof(narrayp));
    printf("varlong size: %d\n", sizeof(varlong));
    printf("varlongp size: %d\n", sizeof(varlongp));

    return 0;
}