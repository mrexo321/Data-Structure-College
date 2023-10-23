#include <stdio.h>

int keliling()
{
	int s1, s2, s3, s4, hasil;
	printf("Masukan Sisi 1 : ");
	scanf("%d", &s1);
	printf("Masukan Sisi 2 : ");
	scanf("%d", &s2);
	printf("Masukan Sisi 3 : ");
	scanf("%d", &s3);
	printf("Masukan Sisi 4 : ");
	scanf("%d", &s4);

	hasil = s1 + s2 + s3 + s4;

	return printf("hasil perhitungan keliling persegi : %d", hasil);
}

int main()
{
	keliling();
}
