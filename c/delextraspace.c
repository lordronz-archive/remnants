#include <stdio.h>
#include <string.h>

void *rmvblank(char *str)
{
    int i = 0, j = 0;
    char newStr[100];
    while (str[j] != '\0')
    {
        if (str[j] != ' ')
        {
            newStr[i] = str[j];
        }
        if (str[j] == ' ')
        {
            newStr[i] = str[j];
            while (str[j] == ' ')
            {
                j++;
            }
            j--;
        }
        i++;
        j++;
    }
    i = 0;
    while (i < strlen(newStr))
    {
        printf("%c", newStr[i]);
        i++;
    }
}

int main()
{
    char str[100];
    int i, j;
    printf("Input string = ");
    scanf("%[^\n]%*c", str);
    rmvblank(str);
}