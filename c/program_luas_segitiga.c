#include <stdio.h>
#include <stdlib.h>

int main()
{
    float alas, tinggi, luas;
    printf("Program untuk menghitung luas segitiga\n");
    printf("inputkan nilai alas: \n");
    scanf("%f",&alas);
    printf("inputkan nilai tinggi: \n");
    scanf("%f",&tinggi);
    printf("hasil perhitungan: \n");
    luas = (alas * tinggi) / 2;
    printf("Luas Segitiga= %f", luas);
    return 0;
}
