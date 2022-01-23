#include <stdio.h>

int main(void)
{
    int n;
    //Prompt user for a positive number
    do
    {
        printf("Positive Number :\n");
        scanf("%d", &n);
    } while (n <= 0);

    //Print out this many rows
    for (int i = 0; i < n; i++)
    {
        //Print out this many columns
        for (int j = 0; j < n; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}