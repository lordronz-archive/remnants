#include <stdio.h>
int main ()
{
    int c;
    scanf("%d", &c);
    for (c ; c > 1 ; c = c / 2)
    {
        if (c % 2 == 0)
        {
            printf("0");
        }
        if (c % 2 == 1)
        {
            printf("1");
        }        
    }
    printf("%d", c);
    return 0;
}