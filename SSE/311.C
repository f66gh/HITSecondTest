#include<stdio.h>
#define N 10
void Transpose(int a[][N], int n);
void InputMatrix(int a[][N], int n);
void PrintMatrix(int a[][N], int n);

int main(){
    int a [N][N];
    int n;
    printf("Input n:\n");
    scanf("%d", &n);
    InputMatrix(a, n);
    Transpose(a, n);
    PrintMatrix(a, n);
    return 0;
}

void InputMatrix(int a[][N], int n){
    printf("Input %d*%d matrix:\n", n, n);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &a[i][j]);
        }
    }
}

void Transpose(int a[][N], int n){
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            int temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
        }
    }
}

void PrintMatrix(int a[][N], int n){
    printf("The transposed matrix is:\n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
}