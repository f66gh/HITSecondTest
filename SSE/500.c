#include<stdio.h>
#include<string.h>
int main(){
    printf("请输入一个字符串，长度小于等于100：");
    char str[100];
    fgets(str, 100, stdin);
    int len = strlen(str);
    if(len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }
    printf("该字符串的内存编码为：");
    for(int i = 0; i < len; i++){
        printf(" %x", (unsigned char)str[i] & 0xff);
    }
    printf(" ");
    return 0;
}