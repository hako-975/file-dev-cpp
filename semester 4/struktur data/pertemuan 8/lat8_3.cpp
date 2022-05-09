#include<iostream>
#include<conio.h>
#include<iomanip>

using namespace std;

int main()
{
	int nilai[20];
	int i, j, n, l;
	int temp, iMin;
	
	cout<<"Masukkan banyak bilangan: ";
	cin>>n;
	
	for (i = 0; i < n; i++)
	{
		cout<<"Elemen ke-"<<i<<": ";
		cin>>nilai[i];
	}
	
	// Proses cetak sebelum diurutkan
	cout<<"\nData sebelum diurut: ";
	for (i = 0; i < n; i++)
	{
		cout<<setw(3)<<nilai[i];
	}
	
	// Proses pengurutan
	for (i = 0; i <= n-2; i++)
	{
		iMin = i;
		for (j = i+1; j < n; j++)
		{
			if (nilai[j] < nilai[iMin])
			{
				iMin = j;
			}
		}
		
		temp = nilai[i];
		nilai[i] = nilai[iMin];
		nilai[iMin] = temp;
		cout<<endl;
		
		for (i = 0; i < n; i++)
		{
			cout<<setw(3)<<nilai[i];
		}
	}
	
	cout<<"\nData sesudah diurutkan: ";
	for (i = 0; i < n; i++)
	{
		cout<<setw(3)<<nilai[i];
	}
	getch();
}
