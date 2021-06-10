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

void double_link_del_num(STU **p_head, int num){
    STU *pb, *pf;
    pb = *p_head;
    if(*p_head == NULL){
        printf("Null\n");
        return;
    }
    while((pb->num != num) && (pb->next != NULL)){
        pb = pb->next;
    }
    if(pb->num == num){ // 找到一个节点的 num 和 num 相同, 删除 pb 指向节点
         if(pb == *p_head){ //找到的是头结点
             if((*p_head)->next == NULL){  // only one node
                 *p_head = pb->next;
             }else{
                 *p_head = pb->next; //main 函数中的 head 指向下个节点
                 (*p_head)->front = NULL;

             }
         }else{ //other node
             if(pb->next != NULL){ //del middle node
                 pf = pb->front; // 让 pf 指向找到节点的前一个节点
                 pf->next = pb->next;
                 (pb->next)->front = pf;

             }else{ // del last node
                 pf = pb->front;
                 pf->next = NULL;
             }
         }
        free(pb);
    }else{
        printf("Find nothing\n");
    };


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

    printf("Confirm the num to del\n");
    scanf("%d", &num);
    double_link_del_num(&head, num);


    double_link_print(head);


//    return 0;
}
