#include <stdio.h>
#include <string.h>
char *alphabet_position(char *text)
{
    // Your code here
    char newtext[70];
    char temp[5];
    int i = 0;
    int j = 0;
    int k = 0;
    int flag = 0;
    for (i = 0; i < strlen(text); i++)
    {
        flag = 0;
        if ((*(text + i)) - 64 > 0 && (*(text + i)) - 64 < 27)
        {
            sprintf(temp, "%d ", (*(text + i)) - 64);
            flag = 1;
        }
        if ((*(text + i)) - 96 > 0 && (*(text + i)) - 96 < 27)
        {
            sprintf(temp, "%d ", (*(text + i)) - 96);
            flag = 1;
        }
        if (flag == 1)
        {
            j = 0;
            while (temp[j] != '\0')
            {
                newtext[k] = temp[j];
                j++;
                k++;
            }
        }
    }
    newtext[k] = '\0';
    if (strlen(text) > 0)
        strcpy(text, newtext);

    return text;
}

int main()
{
    char text[50];
    fgets(text, 50, stdin);
    printf("%s", alphabet_position(text));
}