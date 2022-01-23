#include <stdio.h>

int i = 0, a;

void decimaltobinary(int *decimal, int base[100])
{
    if (i == 0)
    {
        a = *decimal;
    }
    base[i] = *decimal % 2;
    *decimal /= 2;
    i++;
    if (*decimal > 0)
    {
        return decimaltobinary(decimal, base);
    }
    for (i--; i >= 0 ; i--)
    {
        printf("%d", base[i]);
    }
    i = 0;
    *decimal = a;
}

void decimaltooctal(int *decimal, int base[100])
{
    base[i] = *decimal % 8;
    *decimal /= 8;
    i++;
    if (*decimal > 0)
    {
        return decimaltooctal(decimal, base);
    }
    for (i--; i >= 0; i--)
    {
        printf("%d", base[i]);
    }
}

int main()
{
    int decimal, base[50];
    printf("Input decimal = ");
    scanf("%d", &decimal);
    printf("Binary = ");
    decimaltobinary(&decimal, base);
    printf("\nOctal = ");
    decimaltooctal(&decimal, base);
}