#include<iostream>
#include<iomanip>
#include<conio.h>
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

void BubbleSortAsc()
{
	int nilai[20];
	int i, j, k, n;
	int temp;
	bool tukar;
	cout<<"Masukkan Banyak Bilangan: ";
	cin>>n;
	
	for (i = 0; i < n; i++)
	{
		cout<<"Elemen ke-"<<i<<": ";
		cin>>nilai[i];
	}
	
	// Proses Cetak sebelum diurutkan
	cout<<"\nData sebelum diurutkan: ";
	Cetak(nilai, n);
	
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
				cout<<"\nUntuk j = "<<j<<": ";
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
	Cetak(nilai, n);
}

void BubbleSortDesc()
{
	int nilai[20];
	int i, j, k, n;
	int temp;
	bool tukar;
	cout<<"Masukkan Banyak Bilangan: ";
	cin>>n;
	for (i = 0; i < n; i++)
	{
		cout<<"Elemen ke-"<<i<<": ";
		cin>>nilai[i];	
	}	
	
	// Proses Cetak sebelum diurutkan
	cout<<"\nData sebelumnya diurut: ";
	Cetak(nilai, n);
	
	// Proses Pengurutan
	i = 0;
	tukar = true;
	while ((i <= n-2) && (tukar))
	{
		tukar = false;
		for (j = n-1; j >= i+1; j--)
		{
			if (nilai[j] > nilai[j-1])
			{
				temp = nilai[j];
				nilai[j] = nilai[j-1];
				nilai[j-1] = temp;
				tukar = true;
				cout<<endl;
				cout<<"\nUntuk j = "<<j<<": ";
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
	Cetak(nilai, n);
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

void QuickSortAsc()
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
}

int main()
{
	int pilih;
	char lagi;
	do
	{
		system("cls");
		cout<<"Program sorting"<<endl;
		cout<<"1. Bubble Sort Menaik"<<endl;
		cout<<"2. Bubble Sort Menurun"<<endl;
		cout<<"3. Quick Sort Menaik"<<endl;
		cout<<"Masukkan pilihan: ";
		cin>>pilih;
		switch (pilih)
		{
			case 1:
				cout<<"Bubble Sort Menaik"<<endl;
				BubbleSortAsc();
				break;
			case 2:
				cout<<"Bubble Sort Menurun"<<endl;
				BubbleSortDesc();
				break;
			case 3:
				cout<<"Quick Sort Menaik"<<endl;
				QuickSortAsc();
				break;
			default:
				cout<<"Pilihan yang Anda masukkan salah!"<<endl;
				break;
		}
		 
		cout<<endl;
		
		cout<<"---------------------------------------"<<endl;
		cout<<"Apakah Anda ingin mengulangi lagi? Y/t"<<endl;
		cin>>lagi;
	} 
	while (lagi == 'y'|| lagi == 'Y');
	
	getch();
}

