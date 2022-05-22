#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;

int main()
{
	int nilai[20];
	int i, j, k, n, l;
	int temp, jarak, s;
	int pilihan;
	char lagi;
	
	do 
	{
		cout<<"1. Shell Sort ASC"<<endl;
		cout<<"2. Shell Sort DESC"<<endl;
		cout<<"3. Insertion Sort ASC"<<endl;
		cout<<"4. Insertion Sort DESC"<<endl;
		cout<<"------------------------"<<endl;
		cout<<"Masukkan pilihan: ";
		cin>>pilihan;
		
		cout<<"Masukan Banyak Bilangan: ";
		cin>>n;
		for (i = 0; i < n; i++)
		{
			cout<<"Elemen ke-"<<i<<": ";
			cin>>nilai[i];
		}
	
		//Proses Cetak Sebelum diurutkan
		cout<<"\nData sebelum diurut: ";
		for (i = 0; i < n; i++)
		{
			cout<<setw(4)<<nilai[i];
		}
			
		switch (pilihan)
		{
			case 1:
				//Proses pengurutan
				jarak = n/2;
				cout<<"\nJarak: "<<jarak<<endl;
				while (jarak >= 1)
				{
					do
					{
						s = 0;
						for (i = 0; i <= (n-jarak)-1; i++)
						{
							k = i + jarak;
							if(nilai[i] > nilai[k])
							{
								temp = nilai[i];
								nilai[i] = nilai[k];
								nilai[k] = temp;
								s = 1;
								for(l = 0; l < n; l++)
								{
									cout<<setw (4)<<nilai[l];
								}
								cout<<"\n\t";
								getch();
							}
						}
					}
			
					while(s!=0);
					jarak /=2;
					cout<<"\nJarak= "<<jarak<<endl;
				}
				
				cout<<"\nData Setelah diurut : ";
				for(i=0; i<n ;i++)
				cout<<setw (4)<<nilai[i];
				getch ();
			break;
			case 2:
				//Proses pengurutan
				jarak = n/2;
				cout<<"\nJarak: "<<jarak;
				while (jarak >= 1)
				{
					do
					{
						s = 0;
						for (i = 0; i <= (n-jarak)-1; i++)
						{
							k = i + jarak;
							if(nilai[i] < nilai[k])
							{
								temp = nilai[i];
								nilai[i] = nilai[k];
								nilai[k] = temp;
								s = 1;
								for(l = 0; l < n; l++)
								{
									cout<<setw (4)<<nilai[l];
								}
								cout<<"\n\t";
								getch();
							}
						}
					}
			
					while(s!=0);
					jarak /=2;
					cout<<"\nJarak= "<<jarak;
				}
				
				cout<<"\nData Setelah diurut : ";
				for(i=0; i<n ;i++)
				cout<<setw (4)<<nilai[i];
				getch ();
			break;
			case 3:
				//Proses pengurutan
				for(i = 1; i<n; i++)
				{
				    temp = nilai[i];
				    j = i - 1;
				    while ((temp <= nilai[j]) && (j>=1))
				    {
				        nilai[j+1] = nilai[j];
				        j--;
				    }
				    if(temp >= nilai[j])
				    {
				        nilai[j+1] = temp;
				    }
				    else
				    {
				        nilai[j + 1] = nilai[j];
				        nilai[j] = temp;
				    }
				    cout<<endl;
				    for(k = 0; k < n; k++)
				    {
				        cout<<setw(3)<<nilai[k];
				    }
				}
				
				//Proses Cetak Setelah diurutkan
				cout<<"\nData Setelah diurut : ";
				for (i = 0; i < n; i++)
				{
				    cout<<setw (3)<<nilai[i];
				}
				getch();
			break;
			case 4:
				//Proses pengurutan
				for(i = 1; i < n; i++)
				{
				    temp = nilai[i];
				    j = i - 1;
				    while ((temp > nilai[j]) && (j >= 1))
				    {
				        nilai[j+1] = nilai[j];
				        j--;
				    }
				    if(temp <= nilai[j])
				    {
				        nilai[j+1] = temp;
				    }
				    else
				    {
				        nilai[j+1] = nilai[j];
				        nilai[j] = temp;
				    }
				    cout<<endl;
				    for(k = 0; k < n; k++)
				    {
				        cout<<setw(3)<<nilai[k];
				    }
				}
				
				//Proses Cetak Setelah diurutkan
				cout<<"\nData Setelah diurut : ";
				for (i = 0; i < n; i++)
				{
				    cout<<setw (3)<<nilai[i];
				}
				getch();
			break;
			default:
				cout<<"Pilihan yang Anda masukkan salah!"<<endl;
				break;
		}
		
		cout<<"\nApakah ingin melakukan lagi? y/n"<<endl;
		cin>>lagi;
	} 
	while (lagi == 'y' || lagi == 'Y');
	cout<<"Terima kasih"<<endl;
	
	getch();
}

