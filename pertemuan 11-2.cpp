#include <iostream>
using namespace std;

int main()
{
	int nomor, 
		bagi, 
		sisa = 0;
	
	char pilihan;
	
	cout<<"------------------------------------------------"<<endl;
	cout<<"Program mencari modulus"<<endl;
	cout<<"------------------------------------------------"<<endl;

	do
	{
		cout<<"Masukkan sebuah bilangan: ";
		cin>>nomor;
		
		cout<<"Masukkan bilangan pembagi (2/3/4/5): ";
		cin>>bagi;
		
		sisa = nomor % bagi;
		
		if(sisa == 0)
		{
			cout<<"Sisa bagi: Tidak ada";
		}
		else
		{
			cout<<"Sisa bagi: "<<sisa;
		}
		cout<<endl;
		
		cout<<"Apakah anda ingin melakukan lagi? (y/n): ";
		cin>>pilihan;
		cout<<"------------------------------------------------"<<endl;
	}
	while(pilihan == 'y' || pilihan == 'Y');
	cout<<"Terimakasih sudah menggunakan program ini"<<endl;
}

