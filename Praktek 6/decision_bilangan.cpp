#include <iostream>
using namespace std;
int main()
{
    int number;

    cout << "Masukan nilai : ";
    cin >> number;

    if (number > 0)
    {
        printf("%d " ,number);
        printf("Angka positif");
    }
    else
    {
        printf("%d " ,number);
        printf("Angka negatif");
    }

    return 0;
}
