#include <stdio.h>
//fibonacci but starting from 1
void fibonacci(int n, int a, int b)
{
    int d;
    printf("%d ", b);
    d = a + b;
    a = b;
    b = d;
    n--;
    if (n > 0)
    {
        return fibonacci(n, a, b);
    }
}

int main()
{
    int n, a = 0, b = 1;
    do
    {
        printf("Input number of terms for the Series = ");
        scanf("%d", &n);
    } while (n <= 0);
    printf("The series are =\n");
    fibonacci(n, a, b);
}