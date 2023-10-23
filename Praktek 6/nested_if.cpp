#include <iostream>

using namespace std;

int main()
{
    int menu, status, order;

    do
    {
        cout << "Menu\n";
        cout << "===============\n";
        cout << "[1] Makanan\n";
        cout << "[2] Minuman\n";
        cout << "[3] Keluar\n\n";

        cout << "Silahkan Pilih Menu : ";
        cin >> menu;

        if (menu == 1)
        {
            cout << "1.Mie ayam bakso\n";
            cout << "2.Bakso urat\n";
            cin >> order;

            if (order == 1)
            {
                cout << "pesanan anda adalah Mie ayam bakso\n";
                cout << "Harga : Rp. 12.000,-";
            }
            else if (order == 2)
            {
                cout << "pesanan anda adalah  Bakso urat\n";
                cout << "Harga : Rp. 13.000,-";
            }
        }
        else if (menu == 2)
        {
            cout << "[1].Es teh manis\n";
            cout << "[2.] Kopikap\n";
            cout << "[3.] Teh gelas\n";
            cin >> order;

            if (order == 1)
            {
                cout << "Minuman anda adalah Es teh manis\n";
                cout << "Harga : Rp. 5.000,-";
            }
            else if (order == 2)
            {
                cout << "Minuman anda adalah Kopikap\n";
                cout << "Harga : Rp. 2.000,-";
            }
            else if (order == 3)
            {
                cout << "Minuman anda adalah Teh gelas\n";
                cout << "Harga : Rp. 1.500,-";
            }
        }
        else if (menu == 3)
        {
            cout << "Terima Kasih";
            return 0;
        }
        else
        {
            cout << "Pilih menu yg tersedia";
            // continue;
        }

        cout << "\n\n";

        cout << "Pilih Menu lagi ?\n";
        cout << "1. Ya\n";
        cout << "2. Tidak\n";
        cout << "Masukan pilihan\n";
        cin >> status;
    } while (status == 1);

    return 0;
}