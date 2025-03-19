#include<stdio.h>

int main(){
    int n ;
    printf("Enter length:");
    scanf("%d", &n);
    for(int i = 0; i < 2 * n - 1; i++){
        if(i < n){
            for(int j = 0; j < n - 1 - i; j++){
                printf(" ");
            }
            if(i == 0){
                for(int k = 0; k < n; k++){
                    printf("*");
                }
                printf("\n");
            }else{
                printf("*");
                for(int k = 0; k < n + i * 2 - 2; k++){
                    printf(" ");
                }
                printf("*");
                printf("\n");
            }
        }else{
            for(int j = 0; j < i - n + 1; j++){
                printf(" ");
            }
            if(i == 2 * n - 2){
                for(int k = 0; k < n; k++){
                    printf("*");
                }
                printf("\n");
            }else{
                printf("*");
                for(int k = 0; k < 5*n - 2* i - 6; k++){
                    printf(" ");
                }
                printf("*");
                printf("\n");
            }
        }
    }
    return 0;
}