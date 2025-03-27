#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define  N  10

int fun(int *a,int *b,int n)
{
    int *c,max=a[0];
    for(c=a+1;c<a+n;c++)
    {
        if(*c>max)
        {
            max=*c;
            *b=c-a;
        }
    }
    return max;
}
int main()
{
    int a[N],i,max,p=0;
    printf("please  input 10 intergers:\n");
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
    max=fun(a,&p,N);
    printf("max=%d,position=%d\n",max,p);
}
