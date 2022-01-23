#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m, n, i;
    scanf("%d", &m);
    n = 0;
repeat1:
    i = 0;
repeat2:
    i++;
    printf("%d ", i);
    if (i <= n)
    {
        goto repeat2;
    }
    printf("\n");
    n++;
    if (n < m)
    {
        goto repeat1;
    }
    return 0;
}
