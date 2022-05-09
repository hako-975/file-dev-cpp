#include<iostream>
#include<conio.h>
#include<iomanip>

using namespace std;

int main()
{
	int nilai[20];
	int i, j, n, l;
	int temp, u, iMaks;
	
	cout<<"Masukkan banyak bilangan: ";
	cin>>n;
	
	for (i = 0; i < n; i++)
	{
		cout<<"Elemen ke-"<<i<<": ";
		cin>>nilai[i];
	}
	
	// Proses cetak sebelum diurutkan
	cout<<"\nData sebelum diurutkan: ";
	for (i = 0; i < n; i++)
	{
		cout<<setw(3)<<nilai[i];
	}
	
	// proses pengurutan
	u = n-1;
	for (i = 0; i <= n-2; i++)
	{
		iMaks = i;
		for (j = i+1; j <= u; j++)
		{
			if (nilai[j] > nilai[iMaks])
			{
				iMaks = j;
			}
		}
		
		temp = nilai[i];
		nilai[i] = nilai[iMaks];
		nilai[iMaks] = temp;
		cout<<endl;
		
		for (i = 0; i < n; i++)
		{
			cout<<setw(3)<<nilai[i];
		}
	}
	
	cout<<"\nData setelah diurutkan: ";
	for (i = 0; i < n; i++)
	{
		cout<<setw(3)<<nilai[i];
	}
	
	getch();
}
