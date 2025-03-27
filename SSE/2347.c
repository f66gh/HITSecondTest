#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void inverse(char *p);
int main()
{
    char a[80];
    fgets(a, 80, stdin);
    a[strlen(a)-1] = '\0';
    inverse(a);
    puts(a);
    return 0;
}
void inverse(char *p)
{
    char *q;
    char t;
    q = p;
    while (*q != '\0')
    {
        q++;
    }
    q--;// 逆序前手动去除换行符

    // 双指针法
    while(p < q){
        t = *p;
        *p = *q;
        *q = t;
        p++;
        q--;
    }
}
