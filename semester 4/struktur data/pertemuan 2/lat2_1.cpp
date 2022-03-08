#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int nilai[10] = {8, 12, 20, 15, 7, 5, 6, 4, 32, 3};
	
	int i, jumlah = 0;
	
	float rata_rata;
	
	// menghitung jumlah
	for (i = 0; i < 10; i++)
	{
		jumlah += nilai[i];
	}
	
	rata_rata = (float) jumlah / 10;
	
	// mencetak elemen array
	cout<<"\n\nDeretan Bilangan \t\t = ";
	for (i = 0; i < 10; i++)
	{
		cout<<nilai[i]<<" ";
	}
	
	// mencetak harga jumlah
	cout<<"\nJumlah Bilangan \t\t = "<<jumlah;
	cout<<"\nRata-rata Bilangan \t\t = "<<rata_rata;
	getch();
}

