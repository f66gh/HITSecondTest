#include<stdio.h>

int main(){
    printf("Game begin:\n");
    int n, m, left = 21;
    while(1){
        while(1){
            printf("How many sticks do you wish to take (1~%d)?", left > 4 ? 4 : left);
            scanf("%d", &n);
            if(n>=1 && n <= 4 && n <= left) break;
        }
        left -= n;
        if(left == 0){
            printf(" You have taken the last sticks.\n");
            printf(" ***You lose!\nGame Over.\n");
            break;
        }
        printf(" %d sticks left in the pile.\n", left);
        m = 5 - n;
        printf("Computer take %d sticks.\n", m);
        left -= m;
        printf(" %d sticks left in the pile.\n", left);
    }
    return 0;
}