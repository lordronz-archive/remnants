#include <stdio.h>
#include <string.h>

#define MAX_INPUT 50

int romantoint(char input[MAX_INPUT], char roman[8])
{
    int num = 0, i, j;
    for (i = 0; i < strlen(input); i++)
    {
        for (j = 0; j < strlen(roman); j++)
        {
            if (input[i] == roman[j])
            {
                switch (roman[j])
                {
                case 'I':
                    switch (input[i + 1])
                    {
                    case 'V':
                        num += 4;
                        break;
                    case 'X':
                        num += 9;
                        break;
                    default:
                        num += 1;
                    }
                    break;
                case 'V':
                    switch (input[i - 1])
                    {
                    case 'I':
                        break;
                    default:
                        num += 5;
                    }
                    break;
                case 'X':
                    switch (strlen(input) == 1)
                    {
                    case 1:
                        num += 10;
                        break;
                    }
                    switch (input[i - 1])
                    {
                    case 'I':
                        break;
                    }
                    switch (input[i + 1])
                    {
                    case 'L':
                        num += 40;
                        break;
                    case 'C':
                        num += 90;
                        break;
                    case 'X':
                        switch (input[i + 2])
                        {
                        case '\0':
                            num += 10;
                            break;
                        }
                        num += 10;
                        break;
                    case 'I':
                    case 'V':
                    case 'D':
                    case 'M':
                        num += 10;
                        break;
                    }
                    break;
                case 'L':
                    switch (input[i - 1])
                    {
                    case 'X':
                        break;
                    default:
                        num += 50;
                    }
                    break;
                case 'C':
                    switch (strlen(input) == 1)
                    {
                    case 1:
                        num += 100;
                        break;
                    }
                    switch (input[i - 1])
                    {
                    case 'X':
                        break;
                    }
                    switch (input[i + 1])
                    {
                    case 'D':
                        num += 400;
                        break;
                    case 'M':
                        num += 900;
                        break;
                    case 'C':
                        switch (input[i + 2])
                        {
                        case '\0':
                            num += 100;
                            break;
                        }
                        num += 100;
                        break;
                    case 'I':
                        switch (input[i - 1])
                        {
                        case 'X':
                            break;
                        default:
                            num += 100;
                            break;
                        }
                        break;
                    case 'V':
                        switch (input[i - 1])
                        {
                        case 'X':
                            break;
                        default:
                            num += 100;
                            break;
                        }
                        break;
                    case 'X':
                    case 'L':
                        num += 100;
                        break;
                    }
                    break;
                case 'D':
                    switch (input[i - 1])
                    {
                    case 'C':
                        break;
                    default:
                        num += 500;
                    }
                    break;
                case 'M':
                    switch (input[i - 1])
                    {
                    case 'C':
                        break;
                    default:
                        num += 1000;
                    }
                    break;
                }
            }
        }
    }
    return num;
}

int main()
{
    char roman[] = "IVXLCDM", input[MAX_INPUT];
    printf("Input roman number = ");
    scanf("%[^\n]%*c", input);
    int ans = romantoint(input, roman);
    printf("Roman to integer = %d", ans);
}