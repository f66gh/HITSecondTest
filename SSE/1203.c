#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define  ROW  2
#define  COL  3

void MultiplyMatrix(int a[ROW][COL],int b[COL][ROW], int c[ROW][ROW]);

int main()
{
    int a[ROW][COL], b[COL][ROW], c[ROW][ROW], i, j;
    printf("Input array a:\n");
    for (i=0; i<ROW; i++)
    {
        for (j=0; j<COL; j++)
        {
            scanf("%d", &a[i][j]);
            getchar();
        }
    }
    printf("Input array b:\n");
    for (i=0; i<COL; i++)
    {
		for (j=0; j<ROW; j++)
		{
			scanf("%d", &b[i][j]);
			getchar();
		}
    }
    MultiplyMatrix(a, b, c);
    printf("Results:\n");
    for (i=0; i<ROW; i++)
    {
        for (j=0; j<ROW; j++)
        {
            printf("    %d", c[i][j]);
        }
        printf("\n");
    }
}
void MultiplyMatrix(int a[ROW][COL],int b[COL][ROW], int c[ROW][ROW])
{
	int i, j, k;
	for (i=0; i<ROW; i++)
    {
        for (j=0; j<ROW; j++)
        {
            c[i][j] = 0;
            for (k=0; k<COL; k++)
            {
                c[i][j] = c[i][j] + a[i][k] * b[k][j];
            }
        }
    }
}
