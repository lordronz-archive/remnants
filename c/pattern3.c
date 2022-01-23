#include <stdio.h>

int main(void)
{
    int a, b, c;
    scanf("%d", &a);
    for (b = 1; b <= a; b++)
    {
        for (c = 1; c <= b; c++)
        {
            printf("%2d", c);
        }
        for (c = a - 1; c >= b; c--)
        {
            printf("    ");
        }
        for (c = b; c > 0; c--)
        {
            printf("%2d", c);
        }
        printf("\n");
    }
}