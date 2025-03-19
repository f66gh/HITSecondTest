#include<stdio.h>

void Input(int *p,int m, int n); 
int FindMax(int *p, int m, int n, int *pRow, int *pCol);

int main(){

    printf("Please input your data:\n");
    int p [3][4];
    Input(p[0], 3, 4);
    int row = 0, col = 0;
    int max = FindMax(p[0], 3, 4, &row, &col);
    printf("The maximum is %d, which is in row %d, colum %d\n"
, max, row, col);
    return 0;
}

void Input(int *p,int m, int n){
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++)
            scanf("%d", &p[i * n + j]);
    }
}

int FindMax(int *p, int m, int n, int *pRow, int *pCol){
    int max = 0;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(p[i * n + j] > max){
                *pRow = i;
                *pCol = j;
                max = p[i * n + j];
            }
        }
    }
    return max;
}