#include <iostream>

using namespace std;

main()
{
    int a;

    cout << "Masukan Angka : ";
    cin >> a;

    cout << "Bilangan Genap Dari 1 Hingga " << a << endl;

    for (int i = 2; i <= a; i += 2)
    {
        cout << i << endl;
    }

    return 0;
}
