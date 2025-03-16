#include<stdio.h>
#include<string.h>
void  inverse(char  str[], int m, int n){
    int temp, i = m - 1, j = m + n - 2;
    while(i < j){
        temp = str[j];
        str[j] = str[i];
        str[i] = temp;
        i++;
        j--;
    }
}

int main(){
    printf("input m,n:");
    int m, n;
    scanf("%d,%d", &m, &n);
    getchar();
    printf("input the string:");
    char str[100];
    fgets(str, 100, stdin);
    int len = strlen(str);
    if(len > 0 && str[len - 1] == '\n') str[len - 1] = '\0';
    inverse(str, m, n);
    printf("the inverse string:%s", str);
    return 0;
}