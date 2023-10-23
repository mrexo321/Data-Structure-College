#include <stdio.h>
#include <iostream>

using namespace std;
int main()
{
	char nama[50];
	float kalkulus, sistemInformasi, basisData, rata;
	printf("masukan Nama Mahasiswa : ");
	scanf("%s",&nama);
	printf("masukan nilai Kalkulus : ");
	scanf("%f",&kalkulus);
    printf("masukan nilai SistemInformasi : ");
	scanf("%f",&sistemInformasi);
	printf("masukan nilai BasisData : ");
	scanf("%f",&basisData);
	rata = (kalkulus + sistemInformasi + basisData)/3;
	printf("Nilai Rata Rata : %0.2f\n" , rata );

	// Metode 2
	// cout << "Masukan Nama Mahasiswa : ";
	// cin >> nama;

	// cout << "Masukan nilai Kalkulus : ";
	// cin >> kalkulus;

	// cout << "Masukan nilai sistem informasi : ";
	// cin >> sistemInformasi;

	// cout << "Masukan nilai basisdata : ";
	// cin >> basisData;

	// rata = (kalkulus + sistemInformasi + basisData) / 3;

	// cout << "============================\n\n";

	// cout << "Nama Mahasiswa : " << nama << endl;
	// cout << "Nilai Kalkulus : " << kalkulus << endl;
	// cout << "Nilai sistem informasi : " << sistemInformasi << endl;
	// cout << "Nilai basisdata : " << basisData << endl;
	// cout << "Nilai Rata Rata : " << rata;

	return 0;
}
