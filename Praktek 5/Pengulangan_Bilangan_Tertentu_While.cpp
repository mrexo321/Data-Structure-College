#include <iostream>

using namespace std;

main()
{
    int i = 1, n;

    printf("Masukan Jumlah Pengulangan :  ");
    scanf("%d", &n);

    while (i <= n)
    {
        printf("%d\n", i);
        i++;
    }
}