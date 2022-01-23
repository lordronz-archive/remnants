#include <stdio.h>

int main(int argc, char** argv)
{
    int a, b, c;
    scanf("%d", &a);
    for (b = a; b > 0; --b)
    {
        for (c = a; c > b; --c)
        {
            printf("%2d", c);
        }
        for (c = 1; c <= (2 * b - 1); ++c)
        {
            printf("%2d", b);
        }
        for (c = b + 1; c <= a; ++c)
        {
            printf("%2d", c);
        }
        printf("\n");
    }
    for (b = 2; b <= a; ++b)
    {
        for (c = a; c > b; --c)
        {
            printf("%2d", c);
        }
        for (c = 1; c <= (2 * b - 1); ++c)
        {
            printf("%2d", b);
        }
        for (c = b + 1; c <= a; ++c)
        {
            printf("%2d", c);
        }
        printf("\n");
    }
}