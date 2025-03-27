#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int FindMax(int num[], int n, int *pMaxPos);//函数返回最大值，pMaxPos返回最大值所在的下标
int FindMin(int num[], int n, int *pMinPos);//函数返回最小值，pMaxPos返回最小值所在的下标

int main(){
    printf("Input 10 numbers:\n");
    int num[10];
    int pMaxPos;
    int pMinPos;
    for(int i = 0; i < 10; i++){
        scanf("%d", &num[i]);
    }
    int ma = FindMax(num, 0, &pMaxPos);
    int mi = FindMin(num, 0, &pMinPos);
    printf("Max=%d,Position=%d,Min=%d,Position=%d\n", ma, pMaxPos, mi, pMinPos);
    return 0;
}

int FindMax(int num[], int n, int *pMaxPos){
    int m = 0;
    for(int i = 0; i < 10; i++){
        if(m < num[i]){
            m = num[i];
            *pMaxPos = i;
        }
    }
    return m;
}

int FindMin(int num[], int n, int *pMinPos){
    int m = 10000;
    for(int i = 0; i < 10; i++){
        if(m > num[i]){
            m = num[i];
            *pMinPos = i;
        }
    }
    return m;
}
