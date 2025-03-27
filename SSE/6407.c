#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int  Judger( char  *p);

int main(){
    char *p = (char *) malloc(100 * sizeof(char));
    fgets(p, 100, stdin);
    int len = strlen(p);
    if(p[len - 1] == '\n'){
        p[len - 1] = '\0';
        len--;
    }
    if(Judger(p)) puts(p);
    else printf("No!");
    return 0;
}

int Judger(char *p){
    int len = strlen(p);
    for(int i = 0; i < len / 2; i++){
        if(p[i] != p[len - i - 1]){
            return 0;
        }
    }
    return 1;
}
