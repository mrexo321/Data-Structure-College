#include <iostream>

using namespace std;

int main()
{
    int angka;

    printf("Masukan Angka : ");
    scanf("%d", &angka);

    // if (angka > 0)
    // {
    //     printf("Angka yang dimasukan Bilangan Positif\n");
    // }
    // else
    // {
    //     printf("Angka Yang Dimasukan Bukan Positif\n");
    // }
    angka > 0 ? printf("Angka yang dimasukan Bilangan Positif\n") : printf("Angka Yang Dimasukan Bukan Positif\n");

    return false;
}