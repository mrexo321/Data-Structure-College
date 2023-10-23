#include <stdio.h>
int volume()
{
	int lenght,width,height,sum;
	printf("Masukan panjang : ");
	scanf("%d" , &lenght);

	printf("Masukan lebar : ");
	scanf("%d" , &width);

	printf("Masukan tinggi : ");
	scanf("%d" , &height);
	sum = lenght * width * height;
	return printf("hasil perhitungan volume persegi : %d" , sum);
}

int main()
{
	volume();
}
