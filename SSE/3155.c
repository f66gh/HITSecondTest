#include<stdio.h>

int IsPrime(double x);

int main(){
    int n;
    printf("Input n:\n");
    scanf("%d", &n);
    int count = IsPrime(n);
    printf("count=%d\n", count);
    return 0;
}

int IsPrime(double x){
    int sum = 0;
    double currPow = 2;
    double sqrt[25];
    for(int i = 2; i <= x; i++){
        if(i % 2 == 0) sqrt[i / 2 - 1] = currPow;
        currPow *= 2;
        double temp = currPow - 1;
        int flag = 0;
        for(int j = 2; j <= sqrt[i / 2 - 1]; j++){
            if(temp / j == (long long)(temp / j)){
                flag = 1;
                break;
            }
        }
        if(flag == 0){
            sum++;
            printf("2^%d-1=%.0f\n", i, temp);
        }
    }

    return sum;
}