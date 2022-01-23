#include <stdio.h>
int main ()
{
    int a=100;
    int b=2;
    int c=25;
    int d=4;
    int result;
    //result = a*b;
    printf("a*b = %d\n",a * b);
    printf("a-b*c = %d\n", a - b * c);
    printf("b/c*a-d = %d\n", b / c * a - d);
    printf("c%%d-b+a = %d\n", c % d - b + a);
}