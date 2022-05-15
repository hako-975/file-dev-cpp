#include<iostream>
#include<conio.h>
#include<iomanip>

using namespace std;

int main()
{
	int nilai[20];
	int i, j, n, l;
	int temp, u, iMin, iMaks;
	int pilihan;
	char lagi;
	
	do 
	{
		cout<<"1. Maximum Sort ASC"<<endl;
		cout<<"2. Maximum Sort DESC"<<endl;
		cout<<"3. Minimum Sort ASC"<<endl;
		cout<<"4. Minimum Sort DESC"<<endl;
		cout<<"------------------------"<<endl;
		cout<<"Masukkan pilihan: ";
		cin>>pilihan;
		cout<<"------------------------"<<endl;
		cout<<"Masukkan banyak bilangan: ";
		cin>>n;
		
		for (i = 0; i < n; i++)
		{
			cout<<"Elemen ke-"<<i<<": ";
			cin>>nilai[i];
		}
		
		cout<<"\nData sebelum diurut: ";
		for (i = 0; i < n; i++)
		{
			cout<<setw(3)<<nilai[i];
		}
		
		switch (pilihan)
		{
			case 1:
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
			break;
			
			case 2:
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
			break;
			
			case 3:
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
			break;
			
			case 4:
				// Proses cetak sebelum diurutkan
				cout<<"\nData sebelum diurut: ";
				for (i = 0; i < n; i++)
				{
					cout<<setw(3)<<nilai[i];
				}
				
				// Proses pengurutan
				u = n-1;
				for (i = 0; i <= n-2; i++)
				{
					iMin = 0;
					for (j = 1; j <= u; j++)
					{
						if (nilai[j] < nilai[iMin])
						{
							iMin = j;
						}
					}
					
					temp = nilai[u];
					nilai[u] = nilai[iMin];
					nilai[iMin] = temp;
					cout<<endl;
					u--;
					
					for (i = 0; i < n; i++)
					{
						cout<<setw(3)<<nilai[i];
					}
				}
			break;
			default:
				cout<<"Pilihan yang Anda masukkan salah"<<endl;
			break;	
		}
		
		cout<<"\nData sesudah diurutkan: ";
		for (i = 0; i < n; i++)
		{
			cout<<setw(3)<<nilai[i];
		}
		
		cout<<"\nApakah ingin melakukan lagi? y/n"<<endl;
		cin>>lagi;
	}
	while (lagi == 'y' || lagi == 'Y');
	cout<<"Terima kasih"<<endl;
	
	getch();
}

