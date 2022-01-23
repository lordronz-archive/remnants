#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
    char mystr[20];
    char str1[100] = "Belajarlah supaya engkau tau ";
    char str2[50] = "apa yang sebelumnya belum kau tau";
    char *p1;
    printf("%s\n", str1);
    p1 = strchr(str1, 'a');
    printf("%d\n", p1 - str1 + 1);
    printf("%c\n", *p1 + 2);
    printf("%c\n", *(p1 + 2));
    strcpy(str1, strcat(str1, str2));
    printf("%s\n", str1);
    p1 = strstr(p1 + 1, "tau");
    printf("%d\n", p1 - str1 + 1);
    p1 = strstr(p1 + 1, "ya");
    printf("%d\n", p1 - str1 + 1);
    printf("%s", p1 + 5);
    return 0;
}