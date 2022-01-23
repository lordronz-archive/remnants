#include <stdio.h>

int main ()
{
    int num1, num2, temp, *a, *b, *c;
    printf("Input num1 = ");
    scanf("%d", &num1);
    printf("Input num2 = ");
    scanf("%d", &num2);
    a = &num1;
    b = &num2;
    c = &temp;
    *c = *a;
    *a = *b;
    *b = *a;
    printf("Values after swapping :\nNum1 = %d\nNum2 = %d", *a, *b);
}
