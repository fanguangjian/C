/*
 * @Author       : G.F
 * @Date         : 2021-04-18 00:47:13
 * @LastEditTime : 2021-04-18 01:06:37
 * @LastEditors  : G.F
 * @FilePath     : /C/function/static.c
 * @Description  : 普通全局变量 0 , 静态全部变量 0, 普通局部变量 随机, 静态局部变量0
 */
#include<stdio.h> 
 //定义一个静态局部变量 
 //在函数内部定义的使用static修饰的变量就是静态局部变量 
 void myfun() { 
     //如果普通局部变量不进行初始化，则默认是随机值 9 //如果静态局部变量不进行初始化，则默认是0
 
    int a; //普通局部变量    
    static int num; //静态局部变量  
    
    printf("a = %d\n", a); ///0
    printf("num = %d\n", num); // 0
  }
 

 
  //静态局部变量不会随着当前函数执行结束而释放空间，下次使用的函数之前的空间

  int main(int argc,char *argv[]){
    myfun();
    return 0;
}