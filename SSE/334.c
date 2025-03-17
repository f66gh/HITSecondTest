#include<stdio.h>

int main(){
    int chars = 0, lines = 0;
    int c;
    while((c = getchar()) != EOF){
        if(c == '\n') lines++;
        chars++;
        
    }
    printf("chars=%d, lines=%d\n", chars, lines);
    return 0;
}