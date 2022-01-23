#include <stdio.h>

int main(void)
{
    int a;
    printf ("PROGRAM KONVERSI DESIMAL KE BINER\nInput Bilangan desimal (0-15):\n");
    scanf ("%i", &a);
    printf ("Hasil Konversi Biner =\n");
    for (a; a > 0; a /= 2)
    {
        if (a % 2 == 1)
        {
            printf ("1\n");
        }
        else if (a % 2 == 0)
        {
            printf ("0\n");
        }
        printf("%d\n", a);      
    }
    printf("%d", a/2);
}