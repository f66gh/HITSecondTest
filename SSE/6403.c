#include<stdio.h>
#define M 10
#define N 10

void tranverse_martix(int m, int n, int arr[M][N], int tArr[M][N]){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            tArr[i][j] = arr[j][i];
        }
    }
    return;
}

int main(){
    int m, n;
    printf("Input m, n:");
    scanf("%d,%d", &m, &n);
    getchar();
    printf("Input %d*%d matrix:\n", m, n);
    int arr[M][N];
    int tArr[M][N];
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    tranverse_martix(m, n, arr, tArr);
    printf("The transposed matrix is:\n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            printf("%d\t", tArr[i][j]);
        }
        printf("\n");
    }
}
