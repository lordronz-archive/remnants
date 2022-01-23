#include <stdio.h>
#include <string.h>

int main()
{
    char s[100], t[100];
    int i, j;
    printf("Input string :\n");
    scanf("%[^\n]%*c", s);
    j = strlen(s) - 1;
    for (i = 0; i <= strlen(s); i++)
    {
        t[j] = s[i];
        j--;
    }
    if (strcmp(s, t) == 0)
    {
        printf("Palindrome string");
    }
    else
    {
        printf("Not a palindrome string");
    }
}