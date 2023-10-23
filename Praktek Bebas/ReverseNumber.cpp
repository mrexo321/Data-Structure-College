#include <iostream>
using namespace std;
int main() {
  int n, angka_terbalik = 0, sisa;

  cout << "Masukan Angka: ";
  cin >> n;

  while(n != 0) {
    sisa = n % 10;
    angka_terbalik = angka_terbalik * 10 + sisa;
    n /= 10;
  }

  cout << "Angka Dibaliknya = " << angka_terbalik;

  return 0;
}
