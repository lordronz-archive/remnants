#include <stdio.h>

int main(void)
{
    char str[100];
    int a = 0;
    scanf ("%s", str);
    while (str[a] != '\0')
    {
        a++;
    }
    printf("%d", a);
}