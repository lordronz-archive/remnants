#include <stdio.h>

int main()
{
    int i, j, N = 5;
    for(i=1; i<=N; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("%d", i);
        }

        printf("\n");
    }
    return 0;
}
