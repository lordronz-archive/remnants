#include <stdio.h>

int main(void)
{
    int n, i, j;
    printf("Input the size of matrix = ");
    scanf("%d", &n);
    int matrix0[n][n], matrix1[n][n], result[n][n];
    printf("Input first matrix = \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", (*(matrix0 + i) + j));
        }
    }
    printf("Input second matrix = \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", (*(matrix1 + i) + j));
        }
    }
    printf("Sum of matrix = \n");
    for (i = 0; i < n; i++)
    {
        printf("(");
        for (j = 0; j < n; j++)
        {
            *(*(result + i) + j) = *(*(matrix0 + i) + j) + *(*(matrix1 + i) + j);
            printf("%2d", *(*(result + i) + j));
        }
        printf(" )\n");
    }
    return 0;
}