#include <stdio.h>

int square(int n);
int main (void)
{
    int x;
    printf ("Masukkan angka yang akan dikuadratkan :\n");
    scanf ("%d", &x);
    printf ("%d dikuadratkan adalah %d", x, square(x));
}
int square(int n)
{
    return n*n;
}