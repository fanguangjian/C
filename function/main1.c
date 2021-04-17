/*
 * @Author       : G.F
 * @Date         : 2021-04-15 00:06:27
 * @LastEditTime : 2021-04-15 00:09:57
 * @LastEditors  : G.F
 * @FilePath     : /C/function/main1.c
 * @Description  : 
 */
// 函数的声明, 子函数在主函数下方, 需要在上方声明
#include <stdio.h>

void myfun1();

int main(){
    myfun1();
    return 0;
}
void myfun1(){
    printf("hello world\n");  
}