#include<stdio.h>

int main(){
    int n, c;
    printf("Input n:");
    scanf("%d", &n);
    int arr[n];
    getchar();
    printf("Input card numbers:");
    for(int i = 0; i < n; i++){
        scanf("%d", &c);
        arr[i] = c;
    }
    
}