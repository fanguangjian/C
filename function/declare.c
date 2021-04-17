#include <stdio.h>

// 函数的声明, 子函数在主函数下方, 需要在上方声明
void myfun1();

int main(){
    myfun1();
    return 0;
}
void myfun1(){
    printf("hello world\n");  
}