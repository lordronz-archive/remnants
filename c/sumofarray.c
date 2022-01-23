#include <stdio.h>

#define MAX_SIZE 6

void sumofthenumbers(int *num, int *x)
{
    int i, j, k = 0;
    for (i = 0; i < MAX_SIZE; i++)
    {
        for (j = i + 1; j < MAX_SIZE; j++)
        {
            if (*(num + i) + *(num + j) == *x)
            {
                printf("%d + %d = %d\n", *(num + i), *(num + j), *x);
                k++;
            }
        }
    }
    if (k == 0)
    {
        printf("tidak ada jumlah dua elemen yang sama dengan x");
    }
}

int main()
{
    int num[MAX_SIZE], x, i;
    for (i = 0; i < MAX_SIZE; i++)
    {
        scanf("%d", &num[i]);
    }
    scanf("%d", &x);
    sumofthenumbers(&num[0], &x);
    return 0;
}