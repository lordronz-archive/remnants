#include <stdio.h>

int main() {
    int score;
    printf ("enter your score = \n");
    scanf ("%d", &score);
    if (score >= 90 && score <= 100)
        printf("\nTop 10%%.\n");
    else if (score < 90 && score >= 75)
        printf("\nTop 20 %%.\n");
    else if (score < 75 && score >=0)
        printf("\nFailed\n.");
    
    return 0;
}