#include <stdio.h>

int main()
{
    int row, col, size, a[10][10], b[10][10], c[10][10];
    printf("Enter the size of matrix:");
    scanf("%d", &size);
    printf("Enter elements in matrix A: \n");
    for (row = 0; row < size; row++)
    {
        for (col = 0; col < size; col++)
        {
            scanf("%d", &a[row][col]);
        }
    }
    printf("Enter elements in matrix B: \n");
    for (row = 0; row < size; row++)
    {
        for (col = 0; col < size; col++)
        {
            scanf("%d", &b[row][col]);
        }
    }
    for (row = 0; row < size; row++)
    {
        for (col = 0; col < size; col++)
        {
            int sum = 0;
            for (int i = 0; i < size; i++)
            {
                sum += a[row][i] * b[i][col];
            }
            c[row][col] = sum;
        }
    }
    printf("Matrix A * Matrix B is = \n");
    for (row = 0; row < size; row++)
    {
        printf("(");
        for (col = 0; col < size; col++)
        {
            printf("%3d", c[row][col]);
        }
        printf(")\n");
    }
    return 0;
}