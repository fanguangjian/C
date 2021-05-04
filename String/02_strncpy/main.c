#include <stdio.h>
#include <string.h>


int main( int argc, char *argv[])
{
//    printf("Hello World!\n");
//    使用 strcpy
    //使用strcpy函数时，必须保证第一个参数的内存足够大
    char s1[35] = "12345";
    char s2[32] = "abcdefg";

    strcpy(s1, s2);

    printf("s1 = %s\n", s1);

    return 0;
}

