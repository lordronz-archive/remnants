#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    char initials[10], name[100];
    int counter = 0;
    printf("Enter Name\t:\t");
    //scanf("%[^\n]", name);
    gets (name);
    for (int i = 0; i < strlen(name); i++)
    {
        if (isupper(name[i]))
        {
        initials[counter] = name[i];
        counter++;
        }
    }
    initials[counter] = '\0';
    printf ("Initials\t:\t%s\n", initials);
}