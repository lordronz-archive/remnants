#include <stdio.h>

int main()
{
    int num1, num2;
    int *a, *b;
    printf("Input num1 = ");
    scanf("%d", &num1);
    printf("Input num2 = ");
    scanf("%d", &num2);
    a = &num1;
    b = &num2;
    printf("Sum = %d\n", *a + *b);
    printf("Difference = %d\n", *a - *b);
    printf("Product = %d", *a * *b);
}