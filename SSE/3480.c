#include<stdio.h>

int Func(int n){
    int temp = 1, result = 0;
    for(int i = 1; i <= n; i++){
        temp *= i;
        temp %= 1000000;
        result += temp;
        result %= 1000000;
    }
    return result;
}

int main(){
    int n;
    printf("Input n:");
    int ret = scanf("%d", &n);
    if(n <= 0 || n > 10 || ret != 1){
        printf("Input error!\n");
        return 0;
    }
    int result = Func(n);
    printf("%d", result);
    return 0;
}