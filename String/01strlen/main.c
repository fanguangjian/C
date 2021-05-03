#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]){
    //使用 strlen 函数获取字符串的长度
    //strlen 获取的字符串的长度遇到第一个\0 结束!

    char s1[100] = "hel\0lo";

    printf("s1_len = %d\n", strlen(s1));
    printf("s1_size = %d\n", sizeof(s1));

    char *s2 = "hello";

    printf("s2_len = %d\n", strlen(s2)); //5
    printf("s2_len = %d\n", sizeof (s2)); //8 指针变量在 64bit 下, 为 8 个字节


    return 0;

}
