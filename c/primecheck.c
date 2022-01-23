#include <stdio.h>

int main(void)
{
    int num, i, b;
    printf("Input a number = ");
    scanf("%d", &num);
    if (num > 1 && num % 1 == 0 && num % num == 0)
    {
        for (int a = 2; a < num; a++)
        {
            b = num % a;
            if (b == 0)
            {
                printf("%d is not a prime number", num);
                break;
            }
        }
        if (b != 0 || num == 2)
        {
            printf("%d is a prime number", num);
        }
    }
    else
    {
        printf("%d is not a prime number", num);
    }
}