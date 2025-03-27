#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void link_string(char *s, char *p, char *e, int sLen, int pLen);

int main()
{
    char *s = (char *)malloc(sizeof(char) * 100);
    char *p = (char *)malloc(sizeof(char) * 100);
    printf("Enter string 1:");
    fgets(s, 100, stdin);
    int sLen = strlen(s);
    if(s[sLen - 1] == '\n') {
        s[sLen - 1] = '\0';
        sLen--;
    }
    printf("Enter string 2:");
    fgets(p, 100, stdin);
    int pLen = strlen(p);
    if(p[pLen - 1] == '\n') {
        p[pLen - 1] = '\0';
        pLen--;
    }
    char *e = (char *)malloc(sizeof(char) * 100);
    link_string(s, p, e, sLen, pLen);
    printf("a+b=%s\n", e);
    return 0;
}

void link_string(char *s, char *p, char *e, int sLen, int pLen){
    for(int i = 0; i < sLen; i++){
        e[i] = s[i];
    }
    for(int i = sLen; i < sLen + pLen; i++){
        e[i] = p[i - sLen];
    }
}
