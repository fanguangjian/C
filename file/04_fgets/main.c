#include <stdio.h>

int main()
{

        FILE *fp;
        fp = fopen("/Users/fangj/Desktop/file.txt","r");
        if(fp == NULL ){
             printf("fail to open!\n");
             return -1;
        }

//        fgets get file content , 获取一行内容
        char buf[32] = "";
        fgets(buf, 32, fp);
        printf("buf = %s\n", buf);


//        FILE *fp;
//        fp = fopen("/Users/fangj/Desktop/file.txt","w");
//        if(fp == NULL ){
//             printf("fail to open!\n");
//             return -1;
//        }

//        fputs("SSSSSSS", fp);



        return 0;
}
