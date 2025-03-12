#include<stdlib.h>
#include<stdio.h>
#define max 40

int fun(int score[], int m, int below_score[], int below_index[]);
int ReadScore(int score[]);
void main()
{
    int a[max], n = -1;
    int i;
    int below_score[max], below_index[max], below_n;
    n = ReadScore(a); 
    below_n = fun(a, n, below_score, below_index); 
    if (n == 0) 
    {
        printf("there are no valid scores\n");
        exit(0);
    }
    printf("the number of the class:%d\n", n);
    printf("the number under the average score: %d\n", below_n);
    for (i = 0; i < below_n; i++)
    {
        printf("the %dth score is: %d\n", below_index[i] + 1, below_score[i]);
    }
}

int ReadScore(int score[]){
    int s, len = 0;
    while(1){
        scanf("%d", &s);
        if(s == -1) return len;
        score[len++] = s;
    }
}

int fun(int score[], int m, int below_score[], int below_index[]){
    int sum = 0, ave;
    for(int i = 0; i < m; i++){
        sum += score[i];
    }
    ave = sum / m;
    int blen = 0;
    for(int i = 0; i < m; i++){
        if(score[i] < ave){
            below_score[blen] = score[i];
            below_index[blen++] = i;
        }
    }
    return blen;
}