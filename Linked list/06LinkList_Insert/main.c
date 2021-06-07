#include <stdio.h>
#include <stdlib.h>

typedef struct student{
    int num;
    int score;
    char name[20];
    struct student *next;  //pin
}STU;

void link_create_head(STU **p_head, STU *p_new){
    STU *p_mov = *p_head;
    if(*p_head == NULL){ // first  head  runs p_new
        *p_head = p_new;
        p_new->next=NULL;
    }else{ // Second join Linked list
        while(p_mov->next!=NULL){
            p_mov = p_mov->next; //find the last link node
        }
        p_mov->next = p_new;// new node insert link
        p_new->next = NULL;
    }
}

// link list map
void link_print(STU *head){
    STU *p_mov;
    //定义新的指针保存链表的首地址，防止使用head改变原本链表
    p_mov = head;
     //当指针保存最后一个结点的指针域为NULL时，循环结束
    while(p_mov!=NULL){
        //先打印当前指针保存结点的指针域
       printf("num=%d score=%d name:%s\n",p_mov->num,p_mov->score,p_mov->name);
        //指针后移，保存下一个结点的地址
        p_mov = p_mov->next;
    }
}

// link list free
void link_free(STU **p_head){
    //    identify one Pointer variable, save the first node address
    STU *pb = *p_head;
    while(*p_head!=NULL){
        // save p_head 's node address
        pb = *p_head;
        //p_head save the next node address
        *p_head=(*p_head)->next;
        //free node
        free(pb);
        pb=NULL;
    }
}

// insert Sort by num
void  link_insert_num(STU **p_head, STU *p_new){
    STU *pb, *pf;
    pb=pf=*p_head;
    if(*p_head == NULL){
        *p_head = p_new;
        p_new-> next = NULL;
        return;
    }
    while((p_new->num >= pb->num) && (pb-> next != NULL)){
        pf=pb;
        pb=pb->next;
    }
    if(p_new->num < pb->num){
        if(pb == *p_head){ //找到的节点是头节点，插在最前面
            p_new->next = *p_head;
            *p_head = p_new;
        }else{
            pf->next = p_new;
            p_new->next = pb;
        }

    }else{//没有找到pb的num比p_new‐>num大的节点，插在最后
        pb->next = p_new;
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
       link_create_head(&head,p_new); //将新节点加入链表
   }

   link_print(head);

   // insert action
   while(1){
       printf("请输入您要插入的节点的 num score name\n");
       p_new=(STU*)malloc(sizeof(STU));// apply for a new node
//       scanf("%d %d %s",&p_new->num, &p_new‐>score,p_new->name);// wrong one
//       scanf("%d %d %s",&p_new->num, &p_new->score,p_new->name);
       scanf("%d %d %s",&p_new->num, &p_new->score,p_new->name);
       link_insert_num(&head,p_new);
       link_print(head);
   }



   link_free(&head);

    return 0;
}

