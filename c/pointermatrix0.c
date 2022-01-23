#include <stdio.h>

int main(void)
{
    int n, i, j;
    printf("Enter the size of matrix = ");
    scanf("%d", &n);
    int matrix[n][n];
    printf("Input your %dx%d matrix\n", n, n);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            // (*(matrix + i) + j is equivalent to &matrix[i][j]
            scanf("%d", (*(matrix + i) + j));
        }
    }
    printf("Your matrix =\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            /* *(*(matrix + i) + j) is equivalent to matrix[i][j]*/
            printf("%d ", *(*(matrix + i) + j));
        }
        printf("\n");
    }
}