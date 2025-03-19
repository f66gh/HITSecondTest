#include<stdio.h>

int main(){
    int n, peach = 1;
    while(1){
        printf("Input days:\n");
        int ret = scanf("%d", &n);
        if(ret == 1 && n > 0) break;
        while (getchar() != '\n');
    }
    for(int i = n - 1; i >= 1; i--){
        peach = (peach + 1) * 2;
    }
    printf("x=%d\n", peach);
    return 0;
}