#include <stdio.h>
#include<stdlib.h>
#include<string.h>

struct stu
{
	char ID[12];//学号
	char name[20];//姓名
	int c1;//语文成绩
	int c2;//数学成绩
	int c3;//英语成绩
	struct stu * next;
};

void Append(struct stu **head);
int compute_sum(struct stu* p);
void Sort(struct stu **headRef);
void DisLink(struct stu * head);
void DeleteMemory(struct stu *head);


int main()
{
    struct stu* head = NULL;
    while(1){
        int choice, flag = 1;
        printf("1  增加数据\n2  退出\n选择：");
        scanf("%d", &choice);
        getchar();
        switch(choice){
            case 1:
                Append(&head);
                break;
            case 2:
                DisLink(head);
                printf("排序后：\n");
                Sort(&head);
                DisLink(head);
                flag = 0;
                break;
            default: break;
        }
        if(flag == 0) break;
    }
    DeleteMemory(head);
	return 0;
}

void Append(struct stu **head){
    char ID[12];
    char name[20];
    int c1, c2, c3, sum = 0;
    struct stu* pNew = (struct stu*)malloc(sizeof(struct stu));
    struct stu *tail = *head;
    while(tail != NULL && tail->next != NULL) tail = tail->next;
    printf("请输入学号：");
    fgets(ID, 12, stdin);
    ID[strlen(ID) - 1] = '\0';
    printf("请输入名字：");
    fgets(name, 20, stdin);
    name[strlen(name) - 1] = '\0';
    printf("请依次输入语文，数学，外语成绩：");
    scanf("%d%d%d", &c1, &c2, &c3);
    getchar();
    pNew->c1 = c1;
    pNew->c2 = c2;
    pNew->c3 = c3;
    strcpy(pNew->ID, ID);
    strcpy(pNew->name, name);
    pNew->next = NULL;
    if(*head == NULL) *head = tail = pNew;
    else tail->next = pNew;
}

void DisLink(struct stu* head){
    struct stu* curr = head;
    printf("序号\t学号\t名字 \t语文\t数学\t外语\t总分\n");
    int no = 1;
    while(curr != NULL){
        int c1 = curr->c1, c2 = curr->c2, c3 = curr->c3;
        char *ID = curr->ID;
        char *name = curr->name;
        int sum = compute_sum(curr);
        printf("%d\t%s\t%s\t%d\t%d\t%d\t%d\n", no++, ID, name, c1, c2, c3, sum);
        curr = curr->next;
    }
}

void DeleteMemory(struct stu *head){
    struct stu* curr = head;
    while(curr != NULL){
        struct stu* temp = curr;
        curr = curr->next;
        free(temp);
    }
}

int compute_sum(struct stu* p){
    return p->c1 + p->c2 +p->c3;
}

void Sort(struct stu** headRef){
    struct stu* sortedHead = NULL;
    struct stu* sortedTail = NULL;
    while(*headRef != NULL){
        struct stu* max = *headRef;
        struct stu* max_pre = NULL;
        struct stu* curr = *headRef;
        struct stu* curr_pre = NULL;
        // 找到剩余链表的最大值
        while(curr != NULL){
            if(compute_sum(curr) > compute_sum(max)){
                max = curr;
                max_pre = curr_pre;
            }
            curr_pre = curr;
            curr = curr->next;
        }
        // 将最大值节点从剩余链表剥离开
        if(max == *headRef){
            *headRef = max->next;
        }
        else {
            max_pre->next = max->next;

        }
        if(sortedHead == NULL){
            sortedHead = sortedTail = max;
        }
        else{
            sortedTail->next = max;
            sortedTail = max;
        }
        sortedTail->next = NULL;
    }
    *headRef = sortedHead;
}
