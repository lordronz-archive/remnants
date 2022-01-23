#include <stdio.h>

int main()
{
    int a[6];
    int b = 10;
    int i;
    a[0] = 3;
    for (i = 1; i <= 5; i = i + 1)
    {
        a[i] = a[i - 1] + (b % i);
        if (i % 2 == 1)
            b = b + 2;
        else
            b = b - 1;
    }
    printf("%d", a[3] + a[4]);
}