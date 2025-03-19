#include<stdio.h>

int main(){
    int count = 1;
    double sum = 0.0;
    for(double i = 1.0; i >= 1e-4; i = 1.0 / count)
        sum += (count++ % 2) ? i : -i;
    printf("sum = %f\n", sum);
    return 0;
}