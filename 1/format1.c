/*
 * @Author       : G.F
 * @Date         : 2021-03-26 09:03:17
 * @LastEditTime : 2021-03-26 09:08:50
 * @LastEditors  : G.F
 * @FilePath     : /CL/format1.c
 * @Description  : 
 */

#include <stdio.h>
int main(){
    int m=456;
    printf("%d%d\n", m, m);     //456456
    //%5d:输出的宽度为5，右对齐，如果实际数据的宽度小于5，则左边位置补空格，如果 于5，则没有用
    printf("%5d%5d\n", m, m);  //  456  456
    //%05d:输出的宽度为5，右对齐，如果实际数据的宽度小于5，则左边位置补0，如果大 5，则没有用
    printf("%05d%05d\n", m ,m); //0045600456
    //%‐5d:输出的宽度为5，左对齐，如果实际数据的宽度小于5，则右边补空格，如果大于 5，则没有用
    printf("%‐5d%‐5d\n", m, m); //-5d-5d

    float n = 3.992;
    printf("n = %f \n", n);      // 3.992000
    //%.2f:小数点后保留两位并且可以四舍五入
    printf("n = %.2f\n", n);    // 3.99

}