#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;
int main()
{
	int nilai[15] = {34, 12, 56, 78, 6, 43, 32, 20, 90, 50, 55, 75, 85, 95, 25};
	int i, j, k, n = 15;
	int temp;
	bool tukar;
	
	// Proses Cetak sebelum diurutkan
	cout<<"\nData sebelum diurutkan: ";
	for (i = 0; i < n; i++)
	{
		cout<<setw(3)<<nilai[i];
	}
	
	// Proses Pengurutan
	i = 0;
	tukar = true;
	while ((i <= n-2) && (tukar))
	{
		tukar = false;
		for (j = n-1; j>= i+1; j--)
		{
			if (nilai[j] < nilai[j-1])
			{
				temp = nilai[j];
				nilai[j] = nilai[j-1];
				nilai[j-1] = temp;
				tukar = true;
				cout<<"\nUntuk j = "<<j<<"\t: ";
				for (k = 0; k < n; k++)
				{
					cout<<setw(3)<<nilai[k];
				}
			}
		}
		
		i++;
	}
	
	// Proses cetak setelah diurutkan
	cout<<"\nData setelah di urut: ";
	for (i = 0; i < n; i++)
	{
		cout<<setw(3)<<nilai[i];
	}
	
	getch();
}

