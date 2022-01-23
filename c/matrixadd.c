#include <stdio.h>

int main()
{
    int size, a[10][10], b[10][10], c[10][10], row, col;
    printf("Enter the size of matrix:");
    scanf("%d", &size);
    printf("Enter elements in matrix A of size 3x3: \n");
    for (row = 0; row < size; row++)
    {
        for (col = 0; col < size; col++)
        {
            scanf("%d", &a[row][col]);
        }
    }
    printf("Enter elements in matrix B of size 3x3: \n");
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
            c[row][col] = a[row][col] + b[row][col];
        }
    }
    printf("Matrix A + Matrix B is = \n");
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