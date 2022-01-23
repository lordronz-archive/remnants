#include <stdio.h>
#include <string.h>

void main()
{
    char a[100], b[100], c[100];
    printf("String 1 = ");
    fgets(a, 100, stdin);
    //scanf("%[^\n]%*c", a);
    printf("String 2 = ");
    fgets(b, 100, stdin);
    //kayaknya fgets ngebaca enter juga gan jadi printf gapake \n
    strcpy(c, a);
    strcpy(a, b);
    strcpy(b, c);
    printf("String 1 = %sString 2 = %s", a, b);
}