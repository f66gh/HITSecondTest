#include<stdio.h>

int main(){
    int total, small = 0, middle = 0, large = 0;
    int method = 0;
    scanf("%d", &total);
    for(int i = 0; i <= total / 5; i++){
        for(int j = 0; j <= (total - 5*i) / 2; j++){
            int k = 30 - i - j;
            if(5 * i + 2 * j + k == total){
                printf("%2d,%2d,%2d\n", k, j, i);
                method++;
            }
            
        }
    }
    printf("%d\n", method);
    return 0;
}