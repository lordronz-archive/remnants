#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int SumofThreeDice (int *i, int *diceRoll, int *sum)
{
    srand(time(0));
    for (*i = 0; *i < 3; (*i)++)
    {
        *diceRoll = (rand() % 6) + 1;
        *sum += *diceRoll;
    }
    return *sum;
}

int main()
{
    int sum1 = 0, sum2 = 0, i, diceRoll;
    char guess;
    printf("\t-----GUESS THE DICE-----\n\n");
    do
    {
        printf("Press enter to roll three dice");
    } while (getchar() != '\n');
    sum1 = SumofThreeDice(&i, &diceRoll, &sum1);
    printf("The sum of three dice is %d\n", sum1);
    printf("Now, guess the next roll, is it going to be higher, lower, or same!\n(Input l for lower, h for higher, s for same)\n");
    do
    {
        scanf("%c", &guess);
    } while (tolower(guess) != 'l' && tolower(guess) != 'h' && tolower(guess) != 's');
    sum2 = SumofThreeDice(&i, &diceRoll, &sum2);
    printf("Next roll, the sum of three dice is %d\n", sum2);
    if (tolower(guess) == 'l')
    {
        if (sum1 > sum2)
        {
            printf("Good job ! :)");
        }
        else
        {
            printf("You suck ! :(");
        }
    }
    if (tolower(guess) == 'h')
    {
        if (sum1 < sum2)
        {
            printf("Good job ! :)");
        }
        else
        {
            printf("You suck ! :(");
        }
    }
    if (tolower(guess) == 's')
    {
        if (sum1 == sum2)
        {
            printf("Good job ! :)");
        }
        else
        {
            printf("You suck ! :(");
        }
    }
}