#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    while(1){
        printf("请输入一个字符串(长度为[3..5]个字符)：");
        scanf("%s", str);
        getchar();
        if(strlen(str) >= 3 && strlen(str) <= 5) break;
    }
    printf("你输入的字符串为：%s", str);
    return 0;
}