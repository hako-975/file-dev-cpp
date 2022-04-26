#include<iostream>
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

	// proses cetak sebelum diurutkan
	cout<<"\nData sebelum diurut: ";
	for (i = 0; i < n; i++)
	{
		cout<<setw(3)<<nilai[i];
	}
	
	// proses pengurutan 
	u = n-1;
	for (i = 0; i <= n-2; i++)
	{
		iMaks = 0;
		for (j = 1; j <= u; j++)
		{
			if (nilai[j] > nilai[iMaks])
			{
				iMaks = j;
			}
		}
		
		temp = nilai[u];
		nilai[u] = nilai[iMaks];
		nilai[iMaks] = temp;
		u--;
		cout<<endl;

		for (l = 0; l < n; l++)
		{
			cout<<setw(3)<<nilai[l];
		}
	}

	cout<<"\nData setelah diurut: ";
	for (i = 0; i < n; i++)
	{
		cout<<setw(3)<<nilai[i];
	}
}
