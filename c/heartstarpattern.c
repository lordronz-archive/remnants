#include <stdio.h>
#include <string.h>

int main()
{
    int i, j, n;
    char str[100];
    printf("Input String = ");
    scanf("%[^\n]%*c", str);
    printf("Input N = ");
    scanf("%d", &n);
    for (i = n / 2; i < n; i += 2)
    {
        for (j = n; j > i + 1; j -= 2)
        {
            printf(" ");
        }
        for (j = 0; j < i; j++)
        {
            printf("*");
        }
        for (j = n; j > i; j--)
        {
            printf(" ");
        }
        for (j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (i = 2 * n - 1; i > 0; i -= 2)
    {
        for (j = 2 * n - 1; j > i; j -= 2)
        {
            printf(" ");
        }
        if (i == 2 * n - 1)
        {
            for (j = (2 * n - 1 - strlen(str)) / 2; j > 0; j--)
            {
                printf("*");
            }
            printf("%s", str);
            for (j = (2 * n - 1 - strlen(str)) / 2; j > 0; j--)
            {
                printf("*");
            }
            if (strlen(str) % 2 == 0)
            {
                printf("*");
            }
        }
        else
        {
            for (j = i; j > 0; j--)
            {
                printf("*");
            }
        }

        printf("\n");
    }
    return 0;
}