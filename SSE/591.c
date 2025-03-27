#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main()
{
    char *str = (char *)malloc(sizeof(char)*32);
    int len = 0;
    char c;
    c = getchar();
    while(c != '\n'){
        str[len] = c;
        len++;
        c = getchar();
    }
    for(int i = 0; i < len; i++){
        c = str[i];
        if(i == 0){
            if(c != '_' && !(c>= 'a' && c <= 'z')&& !(c>='A' && c <='Z')){
                printf("is not");
                return 0;
            }
        }
        else{
            if(c != '_' && !(c>= 'a' && c <= 'z')&& !(c>='A' && c <='Z') && !(c>= '0'&&c<='9')){
            printf("is not");
            return 0;
            }
        }
    }
    printf("is");
    free(str);
    return 0;
}
