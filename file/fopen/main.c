#include <stdio.h>

int main()
{

//    use fopen() to open or create file ,return Pin
    FILE *fp;
//    以只读的方式打开文件，如果文件不存在则报错
//    fp = fopen("/Users/fangj/Desktop/file.txt","r");

//    以只写的方式打开文件，如果文件不存在则创建，如果文件存在清空
//    fp = fopen("/Users/fangj/Desktop/file.txt","w");

    //以只写的方式打开文件，如果文件不存在则创建，入股哦文件存在则追加
    fp = fopen("/Users/fangj/Desktop/file.txt","w");
    if(fp == NULL ){
         printf("fail to open!\n");
         return -1;
    }


    return 0;
}
