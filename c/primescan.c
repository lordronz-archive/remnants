#include <stdio.h>

int main(void)
{
    int num0, num1, a, b;
    do
    {
        printf("Input starting number of range = ");
        scanf("%d", &num0);
        printf("Input ending number of range = ");
        scanf("%d", &num1);
    } while (num0 >= num1);
    printf("The prime number between %d and %d are = \n", num0, num1);
    for (num0 += 1; num0 < num1; num0++)
    {
        if (num0 > 1 && num0 % 1 == 0 && num0 % num0 == 0)
        {
            for (a = 2; a < num0; a++)
            {
                b = num0 % a;
                if (b == 0)
                {
                    break;
                }
            }
            if (b != 0 || num0 == 2)
            {
                printf("%d ", num0);
            }
        }
    }
    return 0;
}