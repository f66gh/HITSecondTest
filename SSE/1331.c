#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

int main(){
    struct node *head = NULL, *tail = NULL;

    printf("\n请输入链表（非数表示结束）\n");
    while(1){
        printf("结点值：");
        int n;
        int res = scanf("%d", &n);
        if(res != 1) break;
        struct node *newNode = (struct node*)malloc(sizeof(struct node));
        newNode->data = n;
        if(head == NULL){
            head = tail = newNode;
        }
        else{
            tail->next = newNode;
            tail = newNode;
        }
    }
    printf("\n");
    struct node *p = head;
    printf("原来表：\n");
    while(p != NULL){
        printf("   %d", p->data);
        p = p->next;
    }

    struct node *q = head->next, *l = NULL;
    p = head;
    while(q != NULL){
        p->next = l;
        l = p;
        p = q;
        q = p->next;
    }
    p->next = l;

    p = tail;
    printf("\n\n");
    printf("反转表：\n");
    while(p != NULL){
        printf("   %d", p->data);
        p = p->next;
    }
    return 0;
}
