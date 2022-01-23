#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main()
{
    int n, i, j = 0, k = 0, l = 0, a = 0, b = 0, c, d, counter[50][50], sorter1[20], sorter[20];
    int swap, count[20], count1[20];
    char upcase[] = "IENJOKPYZAFBWXQRDVMGUTCHLS";
    char lowcase[] = "ienjokpyzafbwxqrdvmgutchls";
    char string[50];
    char sen[20][20];
    scanf("%[^\n]%*c", string);
    for (i = 0; i < 20; i++)
    {
        count[i] = 0;
        count1[i] = 0;
    }
    for (i = 0; i <= strlen(string); i++)
    {
        if (string[i] != ' ')
        {
            sen[a][b] = string[i];
            b++;
        }
        count[c] = b - 1;
        if (string[i] == ' ')
        {
            a++;
            b = 0;
            c++;
        }
        if (string[i] == '\0')
        {
            count[c] = b - 1;
        }
    }
    for (i = 0; i <= a; i++)
    {
        for (j = 0; j <= count[i]; j++)
        {
            printf("%c", sen[i][j]);
        }
    }
    for (i = 0, k = 0, a = 0; i <= strlen(string); i++)
    {
        if (isupper(string[i]) && string[i] != ' ')
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
        if (islower(string[i]) && string[i] != ' ')
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
            count1[a] = l;
            l = 0;
            a++;
        }
        if (string[i] == '\0')
        {
            count1[a] = l;
        }
    }
    printf("%d %d\n", counter[0][0], counter[1][0]);
    for (i = 0; i <= k; i++)
    {
        for (j = 0; j < count1[i]; j++)
        {
            printf("counter[%d][%d] = %d\n", i, j, counter[i][j]);
        }
    }
    for (i = 0, n = 0, a = 0; i < k; i++, a++)
    {
        for (j = i + 1; j <= k; j++)
        {
            if (counter[i][n] > counter[j][n])
            {
                sorter1[a] = j;
                sorter1[a + 1] = i;
            }
            if (counter[i][n] < counter[j][n])
            {
                sorter1[a] = i;
                sorter1[a + 1] = j;
            }
            if (counter[i][n] == counter[j][n])
            {
                sorter1[a] = i;
            }
        }
    }
    printf("%d", sorter1[0]);
    printf("%d", sorter1[1]);
    for (i = 0; i <= a; i++)
    {
        for (j = 0; j <= count[sorter1[i]]; j++)
        {
            printf("%c", sen[sorter1[i]][j]);
        }
        printf(" ");
    }
}