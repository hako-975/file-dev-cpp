#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int nilai[5];
	int i, jumlah = 0;
	float rata_rata;
	
	// membaca dan menghitung jumlah
	for (i = 0; i < 5; i++)
	{
		cout<<"Masukkan elemen ke-"<<i<<" = ";
		cin>>nilai[i];
		jumlah += nilai[i];
	}
	
	rata_rata = (float) jumlah / 5;
	
	// mencetak elemen array
	cout<<"\n\nDeretan Bilangan\t = ";
	for	(i = 0; i < 5; i++)
	{
		cout<<nilai[i]<<" ";
	}
	
	// mencetak harga jumlah
	cout<<"\nJumlah Bilangan\t\t = "<<jumlah;
	cout<<"\nRata-rata Bilangan\t = "<<rata_rata;
	getch();
}

