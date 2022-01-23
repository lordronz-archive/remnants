#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[50], t[50];
    printf("Enter s\t:\t");
    gets(s);
    printf("Enter t\t:\t");
    gets(t);
    int answer = strcmp(s, t);
    printf("answer is %i\n", answer);
    if (answer == 0)
    {
        printf("same");
    }
    else
    {
        printf("different");
    }
}