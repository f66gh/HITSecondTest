#include<stdio.h>
#include<string.h>
#define MAX 80

int MyStrcmp(char s[],char t[]);

int main(){
    char s[MAX], t[MAX];

    printf("Input s\n");
    fgets(s, MAX, stdin);
    int sLen = strlen(s);
    if(s[sLen - 1] == '\n'){
        s[sLen - 1] = '\0';
    }

    printf("Input t\n");
    fgets(t, MAX, stdin);
    int tLen = strlen(t);
    if(t[tLen - 1] == '\n'){
        t[tLen - 1] = '\0';
    }

    int ret = MyStrcmp(s, t);
    if(ret > 0) printf("string s>string t.\n");
    else if(ret < 0) printf("string s<string t.\n");
    else printf("string s=string t.\n");

    return 0;
}

int MyStrcmp(char s[], char t[]){
    for(int i = 0; s[i]!= '\0'&&s[i] != '\0';i++){
        if(s[i] - t[i] != 0) return s[i] - t[i];
    }
    int sLen = strlen(s), tLen = strlen(t);
    if(sLen > tLen) return 1;
    else if(sLen < tLen) return -1;
    return 0;
}
