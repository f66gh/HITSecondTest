#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void InputArray(int *p, int m, int n);
int  FindMax(int *p, int m, int n, int *pRow, int *pCol);//函数返回最大值，pRow和pCol分别返回最大值所在的行列下标

int main(){
    int m, n;
    printf("Input m,n:\n");
    scanf("%d,%d", &m, &n);
    int *p = (int *)malloc(sizeof(int) * m * n);
    InputArray(p, m ,n);
    int pRow, pCol;
    int ma = FindMax(p, m, n, &pRow, &pCol);
    printf("max=%d,row=%d,col=%d\n", ma, pRow, pCol);
    return 0;
}


void InputArray(int *p, int m, int n){
    printf("Input %d*%d array:\n", m,n);
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &p[i * n + j]);
        }
    }
}

int  FindMax(int *p, int m, int n, int *pRow, int *pCol){
    int ma = p[0];
    *pRow = 0;
    *pCol = 0;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n;j++){
            if(p[i * n + j] > ma){
                ma = p[i * n + j];
                *pRow = i;
                *pCol = j;
            }
        }
    }
    return ma;
}
