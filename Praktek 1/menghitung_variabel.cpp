#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
	int a,b,c,d;
	printf("Nilai A :");
	scanf("%d" , &a);

	printf("Nilai B :");
	scanf("%d" , &b);

    c = a + b;
	d = c + a;
    printf("\n Jika nilai  C = A + B\n");
    printf("Dan nilai D = A + C\n");
    printf("\n Maka hasil Nilai D =  %d" , d);
}
