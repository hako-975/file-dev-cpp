#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int nilai[20];
	int posisi[20];
	int i, n, bilangan, banyak = 0;
	
	bool ketemu;
	cout<<"Masukkan banyaknya bilangan: ";
	cin>>n;
	
	// membaca elemen array
	for (i = 0; i < n; i++)
	{
		cout<<"Masukkan elemen ke-"<<i<<": ";
		cin>>nilai[i];
	}
	
	// mencetak elemen array
	cout<<"\n\nDeretan bilangan: ";
	for (i = 0; i < n; i++)
	{
		cout<<nilai[i]<<" ";
	}
	
	// melakukan pencarian
	cout<<"\n\nMasukkan bilangan yang ingin dicari: ";
	cin>>bilangan;
	
	for (i = 0; i < n; i++)
	{
		if (nilai[i] == bilangan)
		{
			ketemu = true;
			posisi[banyak] = i;
			banyak++;
		}
	}
	
	if (ketemu)
	{
		cout<<"Bilangan "<<bilangan<<" ditemukan sebanyak "<<banyak<<endl;
		cout<<"Pada posisi ke: ";
		for (i = 0; i < banyak; i++)
		{
			cout<<posisi[i]<<" ";
		}
	}
	else
	{
		cout<<"Bilangan "<<bilangan<<" tidak ditemukan"<<endl;
	}
	
	getch();
}

