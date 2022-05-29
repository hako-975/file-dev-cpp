#include<iostream>
#include<string>
#include<conio.h>
#include<iomanip>

using namespace std;

int main()
{
	int i, j, k, n, l;
	int jarak, s;
	int temp;
	string tempString;
	string nilai[] = {"suka", "aku", "sama", "kamu", "dulu", "sampai", "dari", "sekarang"};
	int urutanNilai[] = {1, 0, 2, 3, 6, 4, 5, 7};
	n = sizeof(nilai)/sizeof(nilai[0]);

	// cetak array sebelum di urutkan
	for (i = 0; i < n; i++)
	{
		cout<<"Elemen ke-"<<i<<". "<<nilai[i]<<endl;
	}
	cout<<endl;
	
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
				if(urutanNilai[i] > urutanNilai[k])
				{
					
					tempString = nilai[urutanNilai[i]];
					nilai[urutanNilai[i]] = nilai[urutanNilai[k]];
					nilai[urutanNilai[k]] = tempString;
					
					temp = urutanNilai[i];
					urutanNilai[i] = urutanNilai[k];
					urutanNilai[k] = temp;
					
					s = 1;
					for(l = 0; l < n; l++)
					{
						cout<<setw(4)<<nilai[l]<<" ";
					}
					cout<<"\n\t";
					getch();
				}
			}
		}
		while(s!=0);
		jarak /=2;
		cout<<"\nJarak = "<<jarak<<endl;
	}
	
	// cetak array setelah di urutkan
	for (i = 0; i < n; i++)
	{
		cout<<nilai[urutanNilai[i]]<<" ";
	}
	cout<<endl;
	
	getch();
}

