#include <iostream>

using namespace std;

int main()
{
    int luas,alas ,tinggi , hasilLuas,hasilKeliling;
    int s1,s2,s3;
    cout<<"Masukan Alas\n";
    cin>>alas;
    cout<<"Masukan Tinggi\n";
    cin>>tinggi;

    hasilLuas = alas * tinggi /2;
    cout<<"Luasnya adalah : " << hasilLuas<<endl;
    cout<<"Masukan Sisi 1 : ";
    cin>>s1;
    cout<<"Masukan Sisi 2 : ";
    cin>>s2;
    cout<<"Masukan Sisi 3 :";
    cin>>s3;
    hasilKeliling = s1+s2+s3;
    cout<<"Hasil Keliling : " <<hasilKeliling;



    return 0;
}
