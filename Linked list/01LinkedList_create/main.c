#include <stdio.h>
#include <stdlib.h>

// 定义节点结构体
typedef struct student{
    //数据域
    int num;
    int score;
    char name[20];
    struct student *next;  //pin
}STU;

void link_create_head(STU **p_head, STU *p_new){
    STU *p_mov = *p_head;
    if(*p_head == NULL){ //第一次加入空链表, head 执行 p_new
        *p_head = p_new;
        p_new->next=NULL;
    }else{ //第二次及以后加入 Linked list
        while(p_mov->next!=NULL){
            p_mov = p_mov->next; //找到原链表的最后一个节点
        }
        p_mov->next = p_new;// 将新申请的节点插入链表
        p_new->next = NULL;
    }
}
    

int main()
{
   STU *head = NULL, *p_new = NULL;
   int num, i;
   printf("PLease set the Linked list number:\n");
   scanf("%d", &num);
   for(i=0; i<num; i++){
       p_new = (STU*)malloc(sizeof(STU)); //申请第一个节点
       printf("num, score, name:\n"); //赋值
       scanf("%d %d %s",&p_new->num,&p_new->score,p_new->name);
       
       link_creat_head(&head,p_new); //将新节点加入链表

   }

    return 0;
}
