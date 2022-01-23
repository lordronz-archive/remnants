#include <stdio.h>

int main()
{
    int a, b, c = 0, d = 1, e;
    printf("Enter desired amount of fibonacci number = \n");
    scanf("%i", &b);
    printf("Fibonacci sequence =\n");
    for (a = 0 ; a < b; a++)
    {
        printf ("%d, ", c);
        e = c + d;
        c = d;
        d = e;
    }
}