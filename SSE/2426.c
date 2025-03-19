#include<stdio.h>

int main(){
    int n;
    printf("请输入树的层数：");
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        for(int j = 0; j < 2 + i; j++){
            for(int k = 0; k < n - j; k++){
                printf(" ");
            }
            for(int k = 0; k < 2 * j + 1; k++){
                printf("*");
            }
            printf("\n");
        }
    }
    for(int k = 0; k < n; k++){
        printf(" ");
    }
    printf("|");
    printf("\n");
    for(int k = 0; k < n; k++){
        printf("=");
    }
    printf("V");
    for(int k = 0; k < n; k++){
        printf("=");
    }
    printf("\n");
    return 0 ;
}