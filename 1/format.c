/*
 * @Author       : G.F
 * @Date         : 2021-03-26 00:13:06
 * @LastEditTime : 2021-03-26 00:30:05
 * @LastEditors  : G.F
 * @FilePath     : /CL/format.c
 * @Description  : 
 */

  //  %d  十进制有符号整数
    //  %ld 十进制 long 有符号整数
    //  %u  十进制无符号整数
    //  %o   八进制表示的整数
    //  %x   十六进制表示的整数
    //  %f   float 型浮点数
    //  %lf  double 型浮点数
    //  %e   指数形式的浮点数
    //  %c    单个字符
    //  %s    sfring
    //  %p    指针的值

#include <stdio.h>
int main(){

//  输出整数
int a = 100;
printf("a = %d \n", a); //十进制
printf("a = %o \n", a);   // 八进制
printf("a = %#o \n", a);   // 前导符
printf("a = %x \n", a);   //十六进制
printf("a = %#x \n", a);

float b = 3.1415926;
double c = 2345.3343;
printf("b = %f\n", b);
printf("c = %lf\n", c);

 //输出字符，使用%c输出字符，使用%d可以输出字符的ascii码值
char d = 'y';
printf("d = %c %d\n", d, d);
printf("%c %d\n", d, d); // y 121


//输出字符串，使用%s
//没有专门的变量保存字符串，一般使用数组来保存
char e[] = "hello world";
printf("%s\n", e);

//输出地址，使用%p
int f=999;
 //&:取一个变量的地址，一般地址用十六进制数标识
printf("&f = %p\n", &f);





return 0;

  
}