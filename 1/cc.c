/*
 * @Author       : G.F
 * @Date         : 2021-03-24 23:28:25
 * @LastEditTime : 2021-03-24 23:28:46
 * @LastEditors  : G.F
 * @FilePath     : /CL/cc.c
 * @Description  : 
 */

#include <stdio.h>
 
int main()
{
   const int  LENGTH = 10;
   const int  WIDTH  = 5;
   const char NEWLINE = '\n';
   int area;  
   
   area = LENGTH * WIDTH;
   printf("value of area : %d", area);
//    printf("%c", NEWLINE);
 
   return 0;
}
