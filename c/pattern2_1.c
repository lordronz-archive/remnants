#include <stdio.h>

int main(int argc, char** argv)
{
    int a, b, c;
    scanf("%d", &a);
    for (b = 0; b < a; ++b)
    {
        for (c = 0; c < b; ++c)
        {
            printf("%2d", c % 10);
        }
        for (c = 0; c <= (2 * (a - b) - 2); ++c)
        {
            printf("%2d", b % 10);
        }
        for (c = b; c >= 0; --c)
        {
            printf("%2d", c % 10);
        }
        printf("\n");
    }
    for (b = a - 1; b >= 0; --b)
    {
        for (c = 0; c <= b; ++c)
        {
            printf("%2d", c % 10);
        }
        for (c = 0; c < (2 * (a - b) - 2); ++c)
        {
            printf("%2d", b % 10);
        }
        for (c = b; c >= 0; --c)
        {
            printf("%2d", c % 10);
        }
        printf("\n");
    }
    return 69;
}