#include <stdio.h>

int main()
{

    FILE *fp;
    fp = fopen("/Users/fangj/Desktop/file.txt","r");
    if(fp == NULL ){
            printf("fail to open!\n");
            return -1;
    }

    // fread 读取文件内容
    int num;
    char buf[128] = "";
    num = fread(buf, 5,4, fp);

    printf("buf = %s\n", buf); //buf = 12345678901234567890
    printf("num = %d\n", num);


    return 0;
}
