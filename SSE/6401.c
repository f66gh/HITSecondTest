#include<stdio.h>

int main(){
    long m;
    double n;
    printf("请输入利润：");
    scanf("%ld", &m);
    printf("%ld\n", m);
    if(m <= 100000){
        n = m * 0.1;
    }
    else if(m <= 200000){
        n = 100000 * 0.1 + (m - 100000) * 0.075; 
    }
    else if(m <= 400000){
        n = 100000 * 0.1 + 100000 * 0.075 + (m - 200000) * 0.05; 
    }
    else if(m <= 600000){
        n = 100000 * 0.1 + 100000 * 0.075 + 200000* 0.05 + (m - 400000) * 0.03;
    }
    else if(m <= 1000000){
        n = 100000 * 0.1 + 100000 * 0.075 + 200000 * 0.05 + 200000 * 0.03 + (m - 600000) * 0.015;
    }
    else {
        n = 100000 * 0.1 + 100000 * 0.075 + 200000 * 0.05 + 200000 * 0.03 + 400000 * 0.015 + (m - 1000000) * 0.01;
    }
    printf("奖金是%10.2f", n);
    return 0;
}