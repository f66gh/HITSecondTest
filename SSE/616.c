#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

void reversePrint(struct node* p){
    if(p == NULL) return;
    reversePrint(p->next);
    printf("The value is ==>%d\n", p->data);
}

int main(){
    printf("\nplease input 5 data==>\n");
    struct node *head = NULL, *tail = NULL;
    for(int i = 0; i < 5; i++){
        // 尾插法，因为题干说要逆序打印链表
        struct node *newNode = (struct node*)malloc(sizeof(struct node));
        scanf("%d", &newNode->data);
        if(head == NULL){
            head = newNode;
            tail = newNode;
        }else{
            tail->next = newNode;
            tail = newNode;
        }
    }
    reversePrint(head);
    return 0;
}