#include <stdio.h>
#include<stdlib.h>

struct Student{
    int ID;          //学生学号
    char name[10];     //学生姓名
    float score;          //最终得分
    struct Student * pNextNode;
} Student;


struct Student* createList(int n);
void sortList(struct Student **headRef);
void printList(struct Student *head);
void freeList(struct Student *head);

int main()
{
    int n;
    printf("input number of person:\n");
    scanf("%d", &n);
    printf("Please input user ID and name:\n");
    struct Student *head = createList(n);
    sortList(&head);
    printf("print the sorted list:\n");
    printList(head);
    freeList(head);
    return 0;
	return 0;
}

struct Student* createList(int n){
    struct Student *head = NULL;
    struct Student *tail = NULL;
    for(int i = 0; i < n; i++){
        struct Student *pNew = (struct Student *)malloc(sizeof(struct Student));
        printf("Input ID and name:\n");
        scanf("%d %s", &pNew->ID, pNew->name);
        printf("Input 5 scores:\n");
        float sum = 0.0;
        for(int j = 0; j < 5; j++){
            float n = 0.0;
            scanf("%f", &n);
            sum += n;
        }
        pNew->score = sum / 5.0f;
        if(head == NULL){
            tail = head = pNew;
        }
        else {
            tail->pNextNode = pNew;
            tail = pNew;
        }
        tail->pNextNode = NULL;
    }
    return head;
}

void sortList(struct Student **headRef){
    struct Student *sortedHead = NULL;
    struct Student *sortedTail = NULL;

    while(*headRef != NULL){
        struct Student *curr = *headRef;
        struct Student *curr_pre = NULL;
        struct Student *max = *headRef;
        struct Student *max_pre = NULL;

        // 寻找剩余链表最大值
        while(curr != NULL){
            if(curr->score > max->score){
                max = curr;
                max_pre = curr_pre;
            }
            curr_pre = curr;
            curr = curr->pNextNode;
        }

        // 将最大结点插入到已排好序的链表中
        if(max == *headRef){
            // 若最大值为头结点则下次循环开始直接向前进一个节点
            *headRef = max->pNextNode;
        }
        else {
            // 拆除max前节点的联系
            max_pre->pNextNode = max->pNextNode;
        }
        // 拆除max后节点的联系
        max->pNextNode = NULL;
        // 将max插入到新链表之中
        if(sortedTail == NULL){
            sortedHead = sortedTail = max;
        }
        else{
            sortedTail->pNextNode = max;
            sortedTail = max;
        }
        sortedTail->pNextNode = NULL;
    }
    *headRef = sortedHead;
}

void printList(struct Student *head){
    struct Student* curr = head;
    while(curr != NULL){
        printf("%d  %s  %.2f\n", curr->ID, curr->name, curr->score);
        curr = curr->pNextNode;
    }
}

void freeList(struct Student *head){
    struct Student* curr = head;
    while(curr != NULL){
        struct Student* temp = curr;
        curr = curr->pNextNode;
        free(temp);
    }
}
