#include <stdio.h>
#include<stdlib.h>
#include<string.h>
void Input(char *p[], int n);
void Sort(char *p[], int n);
void Print(char *p[], int n);
int main()
{
    char str[20][40];
    char *pstr[20];
    for(int i = 0; i < 20; i++){
        pstr[i] = str[i];
    }
    int i, n;

    printf("Input n(n<=20):\n");
    scanf("%d", &n);
    getchar();
    Input(pstr, n);
    Sort(pstr, n);
    printf("Results:\n");
    Print(pstr, n);

    return 0;
}
void Input(char *p[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        
        fgets(p[i],40,stdin);
        int len = strlen(p[i]);
        if(len > 0 && p[i][len - 1] == '\n'){
            p[i][len - 1] = '\0';
        }
    }
}
void Sort(char *p[], int n)
{
    char t;
    int i, j;

    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if(strcmp(p[j], p[j + 1]) > 0){
                char *temp = p[j];
                p[j] = p[j + 1];
                p[j + 1] = temp;
            }
        }
    }
}
void Print(char *p[], int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        printf("%s\n", p[i]);
    }
}