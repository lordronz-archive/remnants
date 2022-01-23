#include <stdio.h>

int main()
{
    int x[10], a;
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &x[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (x[i] > x[j])
            {
                a = x[i];
                x[i] = x[j];
                x[j] = a;
            }
        }
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", x[i]);
    }
}