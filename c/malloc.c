#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 50

int main()
{
    char *str1 = malloc(MAX * sizeof(char));
    int n;
    printf("str1 = ");
    fgets(str1, MAX, stdin);
    if (!str1)
    {
        return 1;
    }
    if (str1[strlen(str1) - 1] == '\n')
    {
        str1[strlen(str1) - 1] = '\0';
    }
    char *str2 = malloc((strlen(str1) + 1) * sizeof(char));
    for (n = 0; n <= strlen(str1); n++)
    {
        str2[n] = str1[n];
    }
    if (strlen(str2) > 0)
    {
        str2[0] = toupper(str2[0]);
    }
    printf("str1 = %s\nstr2 = %s", str1, str2);
    free(str1);
    free(str2);
    return 0;
}