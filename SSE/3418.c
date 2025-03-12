#include<stdio.h>
#include<string.h>

int main(){
    char buffer[30];
    printf("Please Enter String1:\n");
    fgets(buffer, 30, stdin);
    // 用strlen获取字符串
    int len = strlen(buffer);
    if(len > 0 && buffer[len - 1] == '\n') {
        buffer[len - 1] = '\0';
        len--;
    }
    char str[len];
    for(int i = len; i >= 0; i--){
        str[len - i - 1] = buffer[i];
    }
    printf("Result is:\n%s\n", str);
    return 0;
}