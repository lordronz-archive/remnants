#include <stdio.h>

int main()
{
    int x, y;
    char text[20];
    float c;

    scanf("%2d %d %f %s", &x, &y, &c, text);
    /* input: 1234  5.7  elephant */
    printf("%d  %d  %.3f %5s", x, y, c, text);
    /* output: 12  34  eleph */

    return 0;
}