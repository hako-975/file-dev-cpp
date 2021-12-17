#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int t = 11;
	int data[11][2] = {};
	int a, hash;
	for (int i = 0; i < 11; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			data[i][j] = 0;
		}
	}
	
	awal:
		cout << " address\t|\trecord\t|\tmedan penghubung" << endl;
		for (int i = 0; i < 11; i++)
		{
			cout << " indeks\t" << i;
			for (int j = 0; j < 2; j++)
			{
				cout << "\t|\t " << data[i][j];
			}
			cout << endl;
		}
		cout <<"Masukkan nilai yang akan dimasukkan = ";
		cin >> a;
		hash = (a % t) + 1;
		cout<< "Tekan apa saja untuk melanjutkan..."<<endl;
		getch();
		system("cls");
		if (data[hash - 1][0] == 0)
		{
			data[hash - 1][0] = a;
			goto awal;
		}
		else if (data[hash - 1][0] != 0)
		{
			for (int i = t - 1; i > hash - 1; i--)
			{
				for (int j = 0; j < 2; j++)
				{
					if (data[i][0] == 0)
					{
						data[i][0] = a;
						data[hash - 1][1] = i;
						goto awal;
					}
					else
					{
						cout << "berkas penuh";
						goto awal;
					}
				}
			}
			goto awal;
		}
}
