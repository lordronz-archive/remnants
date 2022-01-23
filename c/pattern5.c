#include <stdio.h>

int main()
{
    int a, b, c = 1, d = 1, e = 2;
    do
    {
        printf("Input = ");
        scanf("%d", &a);
    } while (a <= 0);
    for (b = 1; b <= a; b++)
    {
        for (int i = a - 1; i >= b; i--)
        {
            printf(" ");
        }
        for (; c <= d; c++)
        {
            printf("%3d", c);
        }
        printf("\n");
        d += e;
        e++;
    }
    return 0;
}