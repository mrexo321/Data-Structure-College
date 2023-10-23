#include <iostream>

using namespace std;

int main()
{
    int kalkulus, aljabarLinier, basisData;

    float rataRata;

    printf("Masukan Nilai Kalkulus : ");
    scanf("%d", &kalkulus);

    printf("Masukan Nilai Aljabar Linier : ");
    scanf("%d", &aljabarLinier);

    printf("Masukan Nilai Basis Data : ");
    scanf("%d", &basisData);

    rataRata = (kalkulus + aljabarLinier + basisData) / 3;

    printf("Nilai Rata Rata : %.2f\n", rataRata);

    if (rataRata >= 60)
    {
        printf("Lulus\n");
    }
    else
    {
        printf("Tidak Lulus\n");
    }

    return false;
}