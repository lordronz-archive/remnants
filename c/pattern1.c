#include <stdio.h>

int main()
{
    int a, b, c, d;
    scanf("%d", &a);
    for (b = 0; b < 2*a; b+=2)
    {
        for (c = 1; c <= b+2;c+=2)
        {
            printf("%3d",c);
            d = c-2;
        }
        for (c = d; c>0; c-=2)
        {
            printf("%3d",c);
        }
        printf ("\n");
    }
}