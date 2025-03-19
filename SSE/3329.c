#include<stdio.h>

int main(){
    printf("这里是23根火柴游戏！！\n注意：最大移动火柴数目为三根\n");
    int left = 23;
    while(1){
        int n;
        printf("请输入您移动的火柴数目：\n");
        while(1){
            scanf("%d", &n);
            if(n > 3){
                printf("对不起！您输入了不合适的数目，请重新输入！\n");
            }else break;
        }
        printf("您移动的火柴数目为：%d\n", n);
        left -= n;
        printf("您移动后剩下的火柴数目为：%d\n", left);

        if(left == 0){
            printf("对不起！您输了！");
            break;
        }

        int m;
        if(left > 3) m = left % 3 + 1;
        else if(left == 2 || left == 3) m = left - 1; 
        else m = 1;

        printf("计算机移动的火柴数目为：%d\n", m);
        left -= m;
        printf("计算机移动后剩下的火柴数目为：%d\n", left);

        if(left == 0){
            printf("恭喜您！您赢了！ \n");
            break;
        }
    }
    return 0;
}