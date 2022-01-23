#include <stdio.h>
#include <string.h>

void removeWord(char str[100], char word[100])
{
    char newStr[100];
    int i = 0, j = 0, k = 0;
    for (i = 0; i < strlen(str); i++, k++)
    {
        if (str[i] == word[j])
        {
            while (word[j] != '\0')
            {
                if (str[i] == word[j])
                    {
                        i++;
                    }
                j++;
                
            }
        }
        newStr[k] = str[i];
        j = 0;
    }
    newStr[k] = '\0';
    printf("%s", newStr);
}

int main()
{
    char word[100], str[100];
    int i, j;
    printf("Input string = ");
    scanf("%[^\n]%*c", str);
    printf("Input word to remove = ");
    scanf("%[^\n]%*c", word);
    removeWord(str, word);
}