#include <stdio.h>
#include <iostream>

using namespace std;

 int luas()
	{
 	int lenght, width, sum;

 	printf("Masukan panjang : ");
 	scanf("%d", &lenght);

 	printf("Masukan lebar : ");
 	scanf("%d", &width);

 	sum = lenght * width;

 	return printf("hasil perhitungan luas persegi : %d", sum);
 }
