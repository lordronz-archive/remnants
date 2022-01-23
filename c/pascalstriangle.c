#include <stdio.h>

unsigned long long fact(int *a)
{
    int i;
    unsigned long long b = 1;
    for (i = 1; i <= *a; i++)
    {
        b = i * b;
    }
    return b;
}

int main(void)
{
    int row, col, n, ans, i;
    printf("Enter number of rows = ");
    scanf("%d", &n);
    for (row = 0; row <= n; row++)
    {
        for (i = n; i > row; i--)
        {
            // print 3 spaces
            printf("%3c", ' ');
        }
        for (col = 0; col <= row; col++)
        {
            int substract = row - col;
            ans = fact(&row) / (fact(&col) * fact(&substract));
            printf("%6llu", ans);
        }
        printf("\n");
    }
}