#include<stdio.h>

int main(){
    int n, m;
    printf("\n输入行数：");
    scanf("%d", &n);
    printf("\n输入列数：");
    scanf("%d", &m);

    int arr[n][m];
    for(int i = 0; i < n; i++){
        printf("第%d行？\n", i);
        for(int j = 0; j < m; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            printf("%5d", arr[i][j]);
        }
        printf("\n");
    }
    
    int p, pCol = -1, pRow = -1;
    for(int i = 0; i < n; i++){
        int currMax = 0;
        int currRow;
        int flag = 1;
        for(int j = 0; j < n; j++){
            if(currMax < arr[i][j]){
                currMax = arr[i][j];
                currRow = j;
            }
        }
        for(int j = 0; j < n; j++){
            if(currMax > arr[j][currRow]){
                flag = 0;
                break;
            }
        }
        if(flag == 1){
            pCol = i;
            pRow = currRow;
            p = currMax;
            break;
        }
    }

    if(pCol == -1) printf("\n矩阵中无鞍点!\n");
    else{
        printf("\n第%d行，第%d列的%d是鞍点\n", pCol, pRow, p);
    }
    return 0;
}