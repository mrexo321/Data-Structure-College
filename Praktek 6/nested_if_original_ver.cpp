#include <iostream>
using namespace std;
int main()
{
    int menu, confirmation, order;

    do
    {
        cout << "Menu\n";
        cout << "===============\n";
        cout << "[1] Baju\n";
        cout << "[2] Celana\n";
        cout << "[3] Sepatu\n";
        cout << "[4] Keluar\n\n";

        cout << "Silahkan Pilih Menu :";
        cin >> menu;

        if (menu == 1)
        {
            cout << "1.Nevada\n";
            cout << "2.Supri\n";
            cin >> order;

            if (order == 1)
            {
                cout << "pesanan anda adalah Baju Nevada\n";
                cout << "Harga : Rp. 12.000.000,-";
            }
            else if (order == 2)
            {
                cout << "pesanan anda adalah  Baju Supri\n";
                cout << "Harga : Rp. 1.300.000,-";
            }
        }
        else if (menu == 2)
        {
            cout << "[1]. Levis\n";
            cout << "[2.] Jeans\n";
            cout << "[3.] Pendek\n";
            cin >> order;

            if (order == 1)
            {
                cout << "Pesanan anda adalah Celana Levis\n";
                cout << "Harga : Rp. 500.000,-";
            }
            else if (order == 2)
            {
                cout << "Pesanan anda adalah Celana Jeans\n";
                cout << "Harga : Rp. 200.000,-";
            }
            else if (order == 3)
            {
                cout << "Pesanan anda adalah Celana Pendek\n";
                cout << "Harga : Rp. 150.000,-";
            }
        }
        else if (menu == 3)
        {
            cout << "[1]. Naik\n";
            cout << "[2.] Adibas\n";
            cin >> order;

            if (order == 1)
            {
                cout << "Pesanan anda adalah Sepatu Naiki\n";
                cout << "Harga : Rp. 5.000.000,-";
            }
            else if (order == 2)
            {
                cout << "Pesanan anda adalah Sepatu Adibas\n";
                cout << "Harga : Rp. 3.000.000,-";
            }
        }
        else if (menu == 4)
        {
            cout << "Terima Kasih";
            cout << "\n\n";
            cout << "Yakin ingin keluar?\n";
            cout << "1. Ya\n";
            cout << "2. Tidak\n";
            cout << "Masukan pilihan :";
            cin >> confirmation;

            if (confirmation == 1)
            {
                cout << "Terima kasih sudah berbelanja:)";
                return 0;
            }
        }
        else
        {
            cout << "Pilih menu yg tersedia";
        }
        cout << "\n\n";
        cout << "Pilih Menu lagi ?\n";
        cout << "1. Ya\n";
        cout << "2. Tidak\n";
        cout << "Masukan pilihan\n";
        cin >> confirmation;
    } while (confirmation == 1);

    return 0;
}
