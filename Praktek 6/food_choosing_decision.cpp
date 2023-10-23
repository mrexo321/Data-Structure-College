#include <iostream>
using namespace std;
int main()
{
    int menu;
    cout << "Menu\n";
    cout << "===============\n";
    cout << "[1] Makanan\n";
    cout << "[2] Minuman\n";
    cout << "[3] Keluar\n";
    cout << "Silahkan Pilih Menu : ";
    cin >> menu;
    if (menu == 1)
    {
        cout << "1.Mie ayam bakso";
        cout << "2.Bakso urat";
    }
    else if (menu == 2)
    {
        cout << "Es teh manis";
        cout << "Kopikap";
        cout << "Teh gelas";
    }
    else if (menu == 3)
    {
        cout << "Terima Kasih";
    }
    else
    {
        cout << "Pilih menu yg tersedia";
    }

    return 0;
}
