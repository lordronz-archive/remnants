#include <stdio.h>

int main()
{
    int a, c = 0, d = 1, f;
    scanf("%d", &f);
    for (int e, a = 0;; a++)
    {
        e = c + d;
        c = d;
        d = e;
        if (c == f)
        {
            printf("%d adalah bilangan fibonacci", f);
            break;
        }
        if (c > f)
        {
            printf("%d bukan bilangan fibonacci", f);
            break;
        }
    }
}