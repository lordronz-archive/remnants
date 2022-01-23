#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[50];
    gets(s);
    if (strcmp(s, "kontol") == 0)
    {
        return 0;
    }
    puts(s);
}