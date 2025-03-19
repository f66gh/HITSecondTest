#include<stdio.h>
#include<stdlib.h>
typedef struct stack
{
    int data;
    struct stack *next;
} STACK;
STACK *head = NULL, *pr;
int nodeNum = 0;                            /* 堆栈节点数寄存器 */
STACK *CreateNode(int num);
STACK *PushStack(int num);
int PopStack(void);
int main()
{
    int pushNum[5] = {111, 222, 333, 444, 555}, popNum[5], i;
    for (i = 0; i < 5; i++)
    {
        PushStack(pushNum[i]);
        printf("Push %dth Data:%d\n", i + 1, pushNum[i]);
    }
    for (i = 0; i < 5; i++)
    {
        popNum[i] = PopStack();
        printf("Pop %dth Data:%d\n", 5 - i, popNum[i]);
    }
    return 0;
}
/* 函数功能：生成一个新的节点，并为该节点赋初值，返回指向新的节点的指针 */
STACK *CreateNode(int num)
{
    STACK *p;
    p = (STACK *)malloc(sizeof(STACK));
    p->data = num;
    return p;
}
/*  函数功能：将整型变量num的值压入堆栈，返回指向链表新节点的指针 */
STACK *PushStack(int num)
{
    if(head == NULL){
        head = CreateNode(num);
        pr = head;
    }
    else{
        pr->next = CreateNode(num);
        pr = pr->next;
    }
    nodeNum++;
    return pr;
}
/*  函数功能：将当前栈顶的数据弹出堆栈，返回从堆栈中弹出的数据 */
int PopStack(void)
{
    STACK *p = head;
    int result;
    if(nodeNum > 1){
        result = pr->data;
        while(p->next != pr){
            p = p->next;
        }
        pr = p;
        nodeNum--;
    }
    else if(nodeNum == 1){
        result = pr->data;
        head = p = pr = NULL;
        nodeNum = 0;
    }
    
    return result;
}
