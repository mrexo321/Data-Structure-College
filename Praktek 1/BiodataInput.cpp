#include <stdio.h>
#include <iostream>
using namespace std;
main()
{
	string nama;
  	int umur;
	string jenisKelamin;
	cout<<"Masukan nama : ";
    getline(cin,nama);
	cout<<"Masukan jenis kelamin: ";
	getline(cin,jenisKelamin);
	cout<<"Masukan umur: ";
	cin>>umur;
	cout<<"\n\n\n";
	cout<<"======================\n\n\n";
	cout<<"Nama : "<<nama<<endl;
	cout<<"Jenis Kelamin : "<<jenisKelamin<<endl;;
	cout<<"Umur : "<<umur<<" Tahun"<<endl;
	return 0;
}
