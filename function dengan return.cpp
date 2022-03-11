#include<iostream>
using namespace std;

int luas_persegi_panjang(int p, int l)
{
	return p * l;
}

int main()
{
	int p, l;
	cout<<"Masukkan Panjang: ";
	cin>>p;
	cout<<"Masukkan Lebar: ";
	cin>>l;
	cout<<"Luas Persegi Panjang: "<<luas_persegi_panjang(p, l);
	
	return 0;
}

