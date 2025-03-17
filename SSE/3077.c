#include <stdio.h>
int main()
{
    int x1, x2, res;
    do
    {
        printf("Input x1, x2:\n");
        res = scanf("%d,%d", &x1, &x2);
        if(res != 2){
            while(getchar() != '\n');
            continue;
        }
    }
    while (x1 * x2 >= 0);
    printf("x1=%d,x2=%d\n", x1, x2);
    return 0;
}