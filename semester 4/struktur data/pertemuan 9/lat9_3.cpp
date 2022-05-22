#include<iostream>
#include<conio.h>
#include<iomanip>

using namespace std;

int main()
{
	int nilai[20];
	int i, j, k, n, l;
	int temp;
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
		cout<<setw(3)<<nilai[i];
	}
	
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
}

