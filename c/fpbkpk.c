#include <stdio.h>

int fpb(int a, int b)
{
    int c, sisa;
    if (a < b)
    {
        c = a;
        a = b;
        b = c;
    }
    do
    {
        sisa = a % b;
        a = b;
        b = sisa;
    } while (sisa != 0);
    return a;
}

int kpk(int a, int b)
{
    int x = a, y = b;
    while (x != y)
    {
        if (x < y)
        {
            x = x + a;
        }
        else
        {
            y = y + b;
        }
    }
    return x;
}

int main()
{
    int a, b;
    printf("Masukkan bilangan pertama dan kedua :\n");
    scanf("%d %d", &a, &b);
    printf("FPB = %d\nKPK = %d", fpb(a, b), kpk(a, b));
    return 0;
}