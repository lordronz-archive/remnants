#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char str[1000];
    int x[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    scanf("%[^\n]%*c", str);
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == '0')
        {
            x[0] += 1;
        }
        if (str[i] == '1')
        {
            x[1] += 1;
        }
        if (str[i] == '2')
        {
            x[2] += 1;
        }
        if (str[i] == '3')
        {
            x[3] += 1;
        }
        if (str[i] == '4')
        {
            x[4] += 1;
        }
        if (str[i] == '5')
        {
            x[5] += 1;
        }
        if (str[i] == '6')
        {
            x[6] += 1;
        }
        if (str[i] == '7')
        {
            x[7] += 1;
        }
        if (str[i] == '8')
        {
            x[8] += 1;
        }
        if (str[i] == '9')
        {
            x[9] += 1;
        }
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d", x[i]);
    }
    return 0;
}
