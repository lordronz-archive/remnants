#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main()
{
    int n, i, j = 0, k = 0, l = 0, a = 0, b = 0, c, counter[50][50], sorter1[20], sorter2[20];
    char upcase[] = "IENJOKPYZAFBWXQRDVMGUTCHLS";
    char lowcase[] = "ienjokpyzafbwxqrdvmgutchls";
    char string[50];
    char sen[20][20];
    scanf("%[^\n]%*c", string);
    for (i = 0; i < strlen(string); i++)
    {
        if (string[i] != ' ')
        {
            sen[a][b] = string[i];
            b++;
        }
        if (string[i] == ' ')
        {
            a++;
            b = 0;
        }
    }
    for (i = 0; i < strlen(string); i++)
    {
        if (isupper(string[i]))
        {
            for (j = 0; j < 27; j++)
            {
                if (string[i] == upcase[j])
                {
                    counter[k][l] = j;
                    l++;
                }
            }
        }
        if (islower(string[i]))
        {
            for (j = 0; j < 27; j++)
            {
                if (string[i] == lowcase[j])
                {
                    counter[k][l] = j;
                    l++;
                }
            }
        }
        if (string[i] == ' ')
        {
            k++;
            l = 0;
        }
    }
    j = 0;
    for (i = 0; i < 50; i++)
    {
        sorter1[i] = 26;
    }
    for (i = 0, a = 0; i <= k; i++)
    {
        if (counter[i][j] > counter[i + 1][j])
        {
            b = i + 1;
            if (b < sorter1[a])
            {
                sorter1[a] = b;
            }
        }
        if (counter[i][j] < counter[i + 1][j])
        {
            b = i;
            if (b < sorter1[a])
            {
                sorter1[a] = b;
            }
        }
        if (counter[i][j] == counter[i + 1][j])
        {
            for (j = 0; j <= l; j++)
            {
                if (counter[i][j] > counter[i + 1][j])
                {
                    b = i + 1;
                    if (b < sorter1[a])
                    {
                        c = b;
                    }
                }
                if (counter[i][j] < counter[i + 1][j])
                {
                    b = i;
                    if (b < sorter1[a])
                    {
                        c = b;
                    }
                }
                if (c < sorter1[a])
                {
                    sorter1[a] = c;
                }
            }
        }
        a++;
    }
    printf("%d ", sorter1[0]);
    printf("%d ", sorter1[1]);
    printf("%d\n", sorter1[2]);
    for (i = 0; i <= a; i++)
    {
        for (j = 0; j < 8; j++)
        {
            printf("%c", sen[sorter1[i]][j]);
        }
    }
}