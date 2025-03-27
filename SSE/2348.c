#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


#define   MAX_LEN  80
#define   N  150
void SortString(char *ptr[], int n);
int main()
{
    int    i, n;
    char   *pStr[N];
    printf("How many countries?\n");
    scanf("%d",&n);
    getchar();
    printf("Input their names:\n");
    for (i=0; i<n; i++)
    {
        pStr[i] = (char *) malloc (MAX_LEN * sizeof(char));
        fgets(pStr[i], MAX_LEN, stdin);
        int len = strlen(pStr[i]);
        pStr[i][len - 1] = '\0';
    }
    SortString(pStr, n);
    printf("Sorted results:\n");
    for (i=0; i<n; i++)
    {
        puts(pStr[i]);
        free(pStr[i]);
    }
}

void SortString(char *ptr[], int n)
{
    int    i, j;
    char  *temp;
    for (i=0; i<n-1; i++)
    {
        for (j = i+1; j<n; j++)
        {
            if(strcmp(ptr[i], ptr[j]) > 0){
                temp = ptr[i];
                ptr[i] = ptr[j];
                ptr[j] = temp;
            }
        }
    }
}
