#include<iostream>

using namespace std;

int main()
{
	int panjang, lebar, luas;
	
	cout<<"Menghitung Luas Persegi Panjang"<<endl;
	
	cout<<"Masukkan Nilai Panjang: ";
	cin>>panjang;	

	cout<<"Masukkan Nilai Lebar: ";
	cin>>lebar;
	
	luas = panjang * lebar;
	
	cout<<"Luas Persegi Panjang: "<<luas;
	
	return 0;
}

