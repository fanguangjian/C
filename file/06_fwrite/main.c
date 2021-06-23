#include <stdio.h>

typedef struct{
    int a;
    int b;
    char c;
}MSG;

int main()
{
    FILE *fp;
    fp = fopen("/Users/fangj/Desktop/file.txt","w+");
    if(fp == NULL ){
            printf("fail to open!\n");
            return -1;
    }

    // 使用fwrite 写入结构体
    MSG msg[4] = {
        1,2,'a',3, 4,'b',
        1,2,'c',
        1,2,'d'
    };
    fwrite(msg, sizeof(MSG), 4, fp);

    rewind(fp);// file offset set as init
    MSG rcv[4];

    fread(rcv, sizeof(MSG), 4, fp);
    int i;
    for(i = 0; i < 4; i++){
        printf("%d - %d - %c\n", rcv[i].a, rcv[i].b, rcv[i].c );
    }
    return 0;
}
