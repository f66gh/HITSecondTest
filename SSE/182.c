#include <stdio.h>
unsigned long Factorial(int n)
{
	if (n==0 || n==1)
	{
		return 1;
	}
	else
	{
		return n * Factorial(n-1);
	}
}
int main()
{
    int n;
	unsigned long x;
	printf("Input n:\n");
	scanf("%d", &n);
	if (n < 0)
	{
		printf("data error!");
		return 0;
	}
	x = Factorial(n);
	printf("%d!=%ld\n", n, x);
	return 0;
}
