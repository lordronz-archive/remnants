#include <stdio.h>
int main ()
{
    int value1, value2, sum;
    value1 = 28;
    value2 = 71;
    sum = value1 + value2;
    printf ("the sum of %i + %i is %i\n", value1, value2, sum);
    //can use %i or %d for int
    return 0;
}