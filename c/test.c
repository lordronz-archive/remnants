#include <stdio.h>
#include <stdlib.h>

int *tobinary(int n, int *binary)
{
    int i = 0;
    for (i = 0; n > 0; i++)
    {
        binary[i] = n % 2;
        n = n / 2;
    }
    return binary;
}

int check(int *binary, int count)
{
    int counter = 0, max = 0;
    for (int i = 0; i < count; i++)
    {
        if (binary[i] == 1)
            counter += 1;
        else if (binary[i] == 0)
            counter = 0;
        if (counter > max)
            max = counter;
    }
    return max;
}

int main()
{
    int n, counter = 0, temp;
    scanf("%d", &n);
    temp = n;
    for (; temp > 0; temp /= 2)
        counter++;
    int *binary = malloc(counter * sizeof(int));
    tobinary(n, binary);
    printf("\n%d", check(binary, counter));
    free(binary);
}