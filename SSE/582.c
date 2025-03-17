#include <stdio.h>
#include<stdlib.h>
#define SIZE sizeof(struct node)
struct node
{
    long num;
    float score;
    struct node *next;
};
int main(){
    int n = 0;
    struct node *head = NULL, *p1, *p2;
    p1 = p2 = (struct node*)malloc(SIZE);
    printf("Input %d node data:\n", n + 1);
    scanf("%ld  %f", &p1->num, &p1->score);
    while (p1->num != 0){
        if (++n == 1)
            head = p1;
        else
            p2->next = p1;
        p2 = p1;
        p1 = (struct node*)malloc(SIZE);
        printf("Input %d node data:\n", n + 1);
        scanf("%ld  %f", &p1->num, &p1->score);
    }
    free(p1);
    printf("Prit list:\n");
    p2->next = NULL;
    if (head != NULL)
    {
        p1=head;     
        while (p1 != NULL)
        {   
            printf("num:%ld\tscore:%.2f\n", p1->num, p1->score);
            p1 = p1->next;
        }
    }
    return 0;
}