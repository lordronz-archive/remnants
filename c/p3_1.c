#include <stdio.h>

int main()
{
    int a[11];
    for (int i = 0; i < 11; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < 11; i++)
    {
        if (a[i] >= 5 && a[i] <= 10)
        {
            printf("%d ", a[i]);
        }
        if (a[i] > 10)
        {
            break;
        }
    }
    return 0;
}