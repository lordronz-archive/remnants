#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int freq[26], i, max = 0, j, maxChar;
    for (i = 0; i < 26; i++)
    {
        freq[i] = 0;
    }
    printf("Input string :\n");
    scanf("%[^\n]%*c", str);
    for (i = 0; i <= strlen(str); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            freq[str[i] - 97]++;
        }
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            freq[str[i] - 65]++;
        }
    }
    for (i = 0; i < 26; i++)
    {
        if (freq[i] > freq[i + 1])
        {
            j = i;
            freq[j] = freq[i];
        }
        else if (freq[i] < freq[i + 1])
        {
            j = i + 1;
            freq[j] = freq[i + 1];
        }
        /*if (freq[j] > max)
        {
            max = freq[j];
            maxChar = j;
        }*/
        freq[j] > max ? max = freq[j], maxChar = j : max;
        if (freq[i] != 0)
        {
            printf("'%c' = %d\n", i + 97, freq[i]);
        }
    }
    printf("The maximum occuring character = '%c'", maxChar + 97);
}