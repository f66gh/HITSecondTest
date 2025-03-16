#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    printf("\n输入字符串：");
    fgets(str, 100, stdin);
    int len = strlen(str);
    str[len - 1] = '\0';
    printf("%s", str);
    char ostr[len];
    int j = 0;
    for(int i = 0; i < len; i++){
        if(str[i] == 'a' || str[i] == 'e' ||str[i] == 'i' ||str[i] == 'o' ||str[i] == 'u'){
            ostr[j++] = str[i];
        }
    }
    ostr[j] = '\0';
    printf("\n字符串中的元音字母是%s", ostr);
    return 0;
}