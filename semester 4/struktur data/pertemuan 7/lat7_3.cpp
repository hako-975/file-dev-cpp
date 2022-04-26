#include<iostream>
#include<conio.h>
#include<iomanip>

using namespace std;

void Cetak (int data[], int n)
{
	int i;
	
	for (i = 0; i < n; i++)
	{
		cout<<setw(3)<<data[i];
	}
	
	cout<<endl;
}

int Partisi (int data[], int p, int r)
{
	int x, i, j, temp;
	x = data[p];
	i = p;
	j = r;
	
	while (1)
	{
		while (data[j] > x)
		{
			j--;
		}
		
		while (data[i] < x)
		{
			i++;
		}
		
		if (i < j)
		{
			temp = data[i];
			data[i] = data[j];
			data[j] = temp;
		}
		else
		{
			return j;
		}
	}
}

void QuickSort(int data[], int p, int r)
{
	int q;
	if (p < r)
	{
		q = Partisi(data, p, r+1);
		QuickSort(data, p, q);
		QuickSort(data, q+1, r);
	}
}

int main()
{
	int nilai[20];
	int i, n;
	cout<<"Masukkan banyak bilangan: ";
	cin>>n;
	for (i = 0; i < n; i++)
	{
		cout<<"Elemen ke-"<<i<<" : ";
		cin>>nilai[i];
	}
	cout<<"Data sebelum diurutkan: ";
	Cetak(nilai, n);
	cout<<endl;
	
	QuickSort(nilai, 0, n-1);
	cout<<"\nData setelah diurutkan: ";
	Cetak(nilai, n);
	getch();
}

