#include <stdio.h>
void  Squeeze(char *s, char c);
main()
{
    char a[80], c;
    scanf("%s",a);
    getchar();
    scanf("%c",&c);
    Squeeze(a, c);
    printf("%s\n",a);
}
void  Squeeze(char *s, char c)
{
    int i,j;
    for (i = 0, j = 0; s[j] !='\0'; j++)
    {
        if (s[j] != c)
        {
            s[i] = s[j];
            i++;
        }
    }
    s[i] = '\0';
}