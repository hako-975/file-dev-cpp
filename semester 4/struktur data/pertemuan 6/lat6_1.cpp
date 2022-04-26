#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int nilai[20];
	int i, n, angka, bilangan;
	cout<<"Masukkan banyaknya bilangan: ";
	cin>>n;
	
	// membaca elemen array
	for	(i = 0; i < n; i++)
	{
		cout<<"Masukkan elemen ke-"<<i<<": ";
		cin>>nilai[i];	
	}
	
	// mencetak elemen array
	cout<<endl;
	cout<<"Deretan bilangan: ";
	for (i = 0; i < n; i++)
	{
		cout<<nilai[i]<<" ";
	}
	
	cout<<endl;
	cout<<"Masukkan bilangan yang akan dicari: ";
	cin>>bilangan;
	
	// melakukan pencarian nilai
	i = 0;
	do 
	{
		if (nilai[i] == bilangan)
		{
			angka = nilai[i];	
		}	
		
		i++;
	}
	while (i < n);
	
	if (angka == bilangan)
	{
		cout<<"Bilangan "<<bilangan<<" ditemukan"<<endl;
	}
	else
	{
		cout<<"Bilangan "<<bilangan<<" tidak ditemukan"<<endl;
	}
	
	getch();
}

