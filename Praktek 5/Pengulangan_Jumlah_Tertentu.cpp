#include <iostream>

using namespace std;

int main()
{
    int x, y;

    printf("Masukan Jumlah Pengulangan");
    scanf("%d", &y);

    for (x = 1; x <= y; x++)
    {
        printf("%d\n", x);
    }

    return false;
}