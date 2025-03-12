#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define   MAX_LEN  10
#define   N         150

void SortString(char *ptr[], int n);

int main()  // 修改为int返回类型
{
    int    i, n;
    char   *pStr[N];
    printf("How many countries?\n");
    scanf("%d", &n);
    getchar();  // 用于捕获上一行的换行符
    printf("Input their names:\n");
    for (i = 0; i < n; i++)
    {
        pStr[i] = (char*)malloc(MAX_LEN + 1);  // 为每个字符串分配内存
        fgets(pStr[i], MAX_LEN + 1, stdin);  // 使用fgets替代gets
        pStr[i][strcspn(pStr[i], "\n")] = '\0'; // 去掉fgets留下的换行符
    }

    SortString(pStr, n);  // 修正这里的参数传递
    printf("Sorted results:\n");
    for (i = 0; i < n; i++)
    {
        puts(pStr[i]);
        free(pStr[i]);  // 释放内存
    }

    return 0;  // 返回0表示正常结束
}

void SortString(char *ptr[], int n)
{
    int    i, j;
    char  *temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (strcmp(ptr[i], ptr[j]) > 0)  // 使用strcmp来比较字符串，升序排序
            {
                temp = ptr[i];
                ptr[i] = ptr[j];
                ptr[j] = temp;
            }
        }
    }
}
