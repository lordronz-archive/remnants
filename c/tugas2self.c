#include <stdio.h>
int main ()
{
    int a, b, c, d, moda, modb, modc, modd ;
    printf ("PROGRAM KONVERSI DESIMAL KE BINER\n");
    printf ("Input Bilangan Desimal (0-15):\n");
    scanf ("%d", &a);
    moda = a%2;
    b = a/2;
    modb = b%2;
    c = b/2;
    modc = c%2;
    d = c/2;
    modd = d%2;
    printf("Hasil Konversi Biner =\n %d\n %d\n %d\n %d", modd, modc, modb, moda);
    return 0;
}