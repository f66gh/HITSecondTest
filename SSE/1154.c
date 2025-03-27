#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define ARR_SIZE 80


int main()
{
    char str[ARR_SIZE];
    int  len, i;
    int  letter=0,digit=0,space=0,other=0;

    printf("请输入一个字符串:");
    fgets(str, ARR_SIZE, stdin);
    str[strlen(str)-1] = '/0';

    len = strlen(str) - 1;

    for (i=0; i<len; i++)
    {
        if ('a'<=str[i] && str[i]<='z' || 'A'<=str[i] && str[i]<='Z')
        {
            letter ++;
        }
        else if ('0'<=str[i] && str[i]<='9')
        {
            digit ++;
        }
        else if (str[i]==' ')
        {
            space ++;
        }
        else
            other ++;
    }

    printf("英文字符数:%d\n", letter);
    printf("数字字符数:%d\n", digit);
    printf("空格数:%d\n", space);
    printf("其他字符数:%d\n", other);
}
