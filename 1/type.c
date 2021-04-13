/*
 * @Author       : G.F
 * @Date         : 2021-03-24 22:20:41
 * @LastEditTime : 2021-03-24 23:25:30
 * @LastEditors  : G.F
 * @FilePath     : /CL/type.c
 * @Description  : 
 */
#include <stdio.h>
int main()
{
    char a;
    short b;
    int c;
    long d;
    float e;
    double f;
    printf("%d\n", sizeof(a)); //1
    printf("%d\n", sizeof(b)); //2
    printf("%d\n", sizeof(c)); //4
    printf("%d\n", sizeof(d)); //8
    printf("%d\n", sizeof(e)); //4
    printf("%d\n", sizeof(f)); //8

    printf("Hello\tWorld\n\n");
    return 0;


}