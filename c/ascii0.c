#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[100];
    int i, n;
    scanf("%s", str);
    for (i = 0, n = strlen(str); i < n; i++)
    {
        printf("%c\t%i\n", str[i], (int)str[i]);
    }
}