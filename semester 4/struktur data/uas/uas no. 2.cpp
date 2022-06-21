#include<iostream>
using namespace std;

int main()
{
	int n = 20;
	int nilai[n] = {61, 62, 87, 27, 18, 97, 40, 32, 65, 77, 16, 96, 34, 24, 15, 14, 17, 81, 13, 82};
	int posisi[n];
	int i, bilangan, banyak = 0;
	
	bool ketemu = false;
	
	// mencetak elemen array
	cout<<"Deretan bilangan: ";
	for (i = 0; i < n; i++)
	{
		cout<<nilai[i]<<" ";
	}
	
	// melakukan pencarian
	cout<<"\nMasukkan 2 digit NIM terakhir Anda: ";
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
		cout<<"2 Digit angka NIM tidak berada pada deretan angka tersebut"<<endl;
	}
}

