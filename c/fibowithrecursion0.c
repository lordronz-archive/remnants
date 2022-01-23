#include <stdio.h>

void fibo(int n, int a, int b, int i)
{
    int c;
    if (n == 0)
    {
        printf("%d", a);
        return;
    }
    c = a + b;
    a = b;
    b = c;
    i++;
    if (i < n)
    {
        return fibo(n, a, b, i);
    }
    printf("%d", a);
}

int main()
{
    int n, a = 0, b = 1, i = 0;
    do
    {
        printf("Enter the nth fibonacci = ");
        scanf("%d", &n);
    } while (n < 0);
    printf("The nth fibonacci is = ");
    fibo(n, a, b, i);
}