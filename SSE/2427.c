#include<stdio.h>

int main(){
    int t[24], n, sum = 0;
    double s[24];
    for(int i = 0; i < 24; i++){
        printf("请输入在%d:00和%d:00之间登录的用户数：", i, i+1);
        scanf("%d", &n);
        t[i] = n;
        sum += n;
    }
    for(int i = 0; i < 24; i++){
        s[i] = ((double) t[i] / sum) * 100;
    }
    int largeIndex = 0, smallIndex = 0, large = t[0], small = t[0];
    for(int i = 0; i < 24; i++){
        if(large < t[i]){
            large = t[i];
            largeIndex = i;
        }
        else if(small > t[i]){
            small = t[i];
            smallIndex = i;
        }
    }
    printf("   时间                 登录人数                 所占比例\n");
    for(int i = 0 ;i < 24 ; i++){
        printf("%2d:00 - %2d:00 %15d %25.1f\n", i, i+1, t[i], s[i]);
    }
    printf("最大登录人数%d发生在%2d：00到%2d：00之间\n", large, largeIndex, largeIndex + 1);
    printf("最小登录人数%d发生在%2d：00到%2d：00之间\n", small, smallIndex, smallIndex + 1);
    return 0;
}