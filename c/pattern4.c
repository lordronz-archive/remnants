#include <stdio.h>
#include <string.h>

int main()
{
    //inisialisasi variabel string, string itu merupakan gabungan banyak char jadi charnya dikasi array berukuran sembarang
    char s[100];
    int i;
    printf("Input :\n");
    //scanf("%s", s);
    //scanf yang diatas gabisa buat input string yang ada spasinya, begitu ada spasi dia berhenti, jadi pake gets
    gets(s);
    printf("Output :\n");
    //bingung jelasin kode dibawah ni, tapi guna strlen itu buat ngitung panjang string, jadi kalo misal input "kontol", strlennya bernilai 5
    for (i = 0; i < strlen(s); i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%c", *(s + j));
        }
        printf("\n");
    }
    //baris 19 sama 28 itu sama saja
    for (i = strlen(s) - 1; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            printf("%c", s[j]);
        }
        printf("\n");
    }
}