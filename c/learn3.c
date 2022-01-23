#include <stdio.h>

int main ()
{
    int x = 2;
    printf("1. In C, lowercase letters are significant.\n2. main is where program execution begins.");
    //printf("2. main is where program execution begins.\n");

    x += 1;     // 3
    printf("\n\"%d\"", x);
    x -= 1;     // 2
    printf("\n\"%d\"", x);
    x *= 3;     // 6
    printf("\n\"%d\"", x);
    x /= 2;     // 3
    printf("\n\"%d\"", x);
    x %= 2;     // 1
    printf("\n\"%d\"", x);
    x += 3 * 2; // 7
    printf("\n\"%d\"", x);
    x & 1 ;
    printf("\n\"%d\"", x);

    return 0;
    }