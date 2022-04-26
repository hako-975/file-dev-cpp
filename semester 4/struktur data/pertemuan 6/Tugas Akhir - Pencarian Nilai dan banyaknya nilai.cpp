#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int nilai[25] = {34, 8, 50, 74, 87, 90, 12, 25, 20, 30, 35, 45, 40, 22, 29, 72, 60, 55, 53, 12, 32, 33, 12, 41, 12};
	int posisi[25][25];
	int bilangan[25];
	int banyak[25];
	int i, j, jumlah, n = sizeof(nilai)/sizeof(nilai[0]);
	bool ketemu[25];
	
	// mencetak elemen array
	cout<<"\nDeretan bilangan: ";
	for (i = 0; i < n; i++)
	{
		cout<<nilai[i]<<" ";
	}
	
	cout<<"\n\nMasukkan jumlah elemen yang ingin dicari: ";
	cin>>jumlah;
	
	// melakukan pencarian
	for	(i = 0; i < jumlah; i++)
	{
		cout<<"\nMasukkan bilangan yang ingin dicari: ";
		cin>>bilangan[i];
	}
	cout<<endl;
	
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < jumlah; j++)
		{
			if (nilai[i] == bilangan[j])
			{
				ketemu[j] = true;
				posisi[j][banyak[j]] = i;
				banyak[j]++;
			}
		}
	}
	
	cout<<"--------------------------------------"<<endl;
	for (i = 0; i < jumlah; i++)
	{
		
		if (ketemu[i] != 255)
		{
			cout<<"Bilangan "<<bilangan[i]<<" ditemukan sebanyak "<<banyak[i]<<endl;
			cout<<"Pada posisi ke: ";
			for (j = 0; j < banyak[i]; j++)
			{
				cout<<posisi[i][j]<<" ";
			}
			cout<<endl<<endl;
		}
		else
		{
			cout<<"Bilangan "<<bilangan[i]<<" tidak ditemukan"<<endl<<endl;
		}
	}	
	
	getch();
}

