#include<stdio.h>
#include<string.h>
#define SIZE 20
int main(){
    int a = 0, b, c;
    char equ[SIZE], s = ' ';
    fgets(equ, SIZE, stdin);
    int len = strlen(equ);
    if(len > 0 && equ[len - 1] == '\n') {
        equ[len - 1] = '\0';
        len--;
    }
    for(int i = 0; i < len; i++){
        if(equ[i] != '+' && equ[i] != '-' && equ[i] != '*' && equ[i] != '/' && equ[i] != '='){
            if(equ[i] < '0'|| equ[i] > '9'){
                printf("错误的运算符：%c", equ[i]);
                return 0;
            }
        }
    }
    for(int i = 0; i < len; i++){
        if(equ[i] >= '0' && equ[i] <= '9'){
            c = equ[i] - '0';
            if(i > 0 && equ[i - 1] >= '0' && equ[i - 1] <= '9'){
                b = b * 10 + c;
            }
            else b = c;
        }
        else{
            if(equ[i] == '+' || equ[i] == '-' || equ[i] == '*' || equ[i] == '/' || equ[i] == '=') {
                if(s == ' ') a = b;
                else{
                    if(s == '+') a += b;
                    else if(s == '-') a-= b;
                    else if(s == '/') a /= b;
                    else if(s == '*') a *= b;
                }
                s = equ[i];
            }
        }
    }
    printf("%d", a);
    return 0;
}