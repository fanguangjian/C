#include <stdio.h>
#include <stdlib.h>

//定义结点结构体
typedef struct student{

    //数据域
    int num;
    int score;
    char name[20];

    //指针域
    struct student *front; //save front node address
    struct student *next;  //save next node address
}STU;


void double_link_create_head(STU**p_head,STU*p_new) {
        STU *p_mov=*p_head;
        if(*p_head==NULL) { //当第一次加入链表为空时，head执行p_new
            *p_head = p_new;
             p_new->front = NULL;
             p_new->next = NULL;
        } else {
        //第二次及以后加入链表
            while(p_mov->next != NULL){
                p_mov=p_mov->next; //找到原有链表的最后一个节点
            }
            p_mov->next = p_new; //将新申请的节点加入链表
            p_new->front = p_mov;
            p_new->next = NULL;
        }
}

void double_link_print(STU*head) {
     STU *pb;
     pb = head;
     while(pb->next != NULL){
         printf("num=%d score=%d name:%s\n",pb->num,pb->score,pb->name);
         pb = pb->next;
     }
     printf("num=%d score=%d name:%s\n",pb->num,pb->score,pb->name);
     printf("***********************\n");
     while(pb != NULL){
         printf("num=%d score=%d name:%s\n",pb->num,pb->score,pb->name);
         pb = pb->front;
     }
}

// insert
void double_link_insert_num(STU **p_head, STU *p_new){

    STU *pb,*pf;
    pb=*p_head;
    //链表为空，新来的节点就是头节点
    if(*p_head == NULL){
        *p_head=p_new;
         p_new->front=NULL;
         p_new->next=NULL;
        return ;
     }
    while((p_new->num >= pb->num) && (pb->next!=NULL)){
        pb = pb->next;
    }
    if(p_new->num < pb->num){ //找到了一个pb的num比新来的节点的num大，插在pb前边
        if(pb==*p_head){ // 找到的节点是头节点，插在头节点的前边
            p_new->next=*p_head; //新插入的结点的next保存之前头结点的地址
            (*p_head)->front=p_new; //之前头结点的front保存新插入的结点的地址
            p_new->front=NULL; //新插入的结点的front保存NULL
            *p_head=p_new; //让原本保存链表首地址的指针保存新插入结点的地址

        }else{
            pf=pb->front;//pf指向 找到节点的前一个节点
            p_new->next=pb;
            p_new->front=pf;
            pf->next=p_new;
            pb->front=p_new;

        }
    }else{ // all pb 指向节点的 num 都比 p_new 指向的节点的 num 小, 插在最后
         pb->next = p_new;
         p_new->front = pb;
         p_new->next = NULL;
    }
}



int main()
{
    STU *head = NULL, *p_new = NULL;
    int num, i;
    printf("Please type the num:\n");
    scanf("%d", &num);
    for(i=0; i<num; i++){
        p_new = (STU*)malloc(sizeof(STU));// apply for a new node
        printf("Please input num,score, name:\n");
        scanf("%d %d %s", &p_new->num, &p_new->score, p_new->name);
        double_link_create_head(&head, p_new);
    }
    double_link_print(head);


    printf("************************\n");
    while(1){
        p_new=(STU*)malloc(sizeof(STU));//申请一个新节点 
        printf("请输入您要插入的节点的num score name\n"); 
        scanf("%d %d %s",&p_new->num,&p_new->score,p_new->name); 
        double_link_insert_num(&head,p_new); 
        double_link_print(head);
    }


//    return 0;
}
