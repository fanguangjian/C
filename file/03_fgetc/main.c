#include <stdio.h>

int main()
{

//    FILE *fp;
//    fp = fopen("/Users/fangj/Desktop/file.txt","r");
//    if(fp == NULL ){
//         printf("fail to open!\n");
//         return -1;
//    }

    //use fclose() 关闭函数
    // fclose(fp);
    //  使用 fgetc 从文件中读取一个字符

//    int c = fgetc(fp);
//    printf("c = [%c] - %d\n", c , c); //A

//    c = fgetc(fp);
//    printf("c = [%c] - %d\n", c , c);//B

//    int c;
//    while(( c = fgetc(fp)) != EOF){
//         printf("c = [%c] - %d\n", c , c);
//    }


    FILE *fp;
    fp = fopen("/Users/fangj/Desktop/file.txt","w");
    fputc('DDDD', fp);
    fputc('\n', fp);
    fputc('DDDD', fp);


    return 0;
}
