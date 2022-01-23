#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char a[100];
    int b,c;
    printf("before :\n");
    scanf("%s", a);
    printf("after :\n");
    for (b = 0, c = strlen(a); b < c; b++)
    {
        printf ("%c", toupper(a[b]));
    }
    printf("\n");
}