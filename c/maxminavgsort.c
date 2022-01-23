#include <stdio.h>

int max(int x[10])
{
    int maxvalue, a;
    maxvalue = x[1];
    for (int i = 0; i < 9; i++)
    {
        if (x[i] > x[i + 1])
        {
            a = x[i];
        }
        else if (x[i] < x[i + 1])
        {
            a = x[i + 1];
        }
        if (a > maxvalue)
        {
            maxvalue = a;
        }
    }
    return maxvalue;
}

int min(int x[10])
{
    int minvalue, a;
    minvalue = x[1];
    for (int i = 0; i < 9; i++)
    {
        if (x[i] < x[i + 1])
        {
            a = x[i];
        }
        else if (x[i] > x[i + 1])
        {
            a = x[i + 1];
        }
        if (a < minvalue)
        {
            minvalue = a;
        }
    }
    return minvalue;
}

float average(int x[10])
{
    float a = 0;
    for (int i = 0; i < 10; i++)
    {
        a = a + x[i];
    }
    return a / 10;
}

void sort(int x[10])
{
    int a;
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

int main()
{
    int x[10];
    printf("Input = ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &x[i]);
    }
    printf("Max = %d\nMin = %d\nAverage = %.2f\nSorted = ", max(x), min(x), average(x));
    sort(x);
}