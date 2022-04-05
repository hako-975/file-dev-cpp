#include<iostream>
using namespace std;

int main()
{
	int nilai[] = {45, 23, 50, 8, 12, 10, 15};
	int *ptrNilai;
	ptrNilai = nilai;
	
	cout<<"Nilai ptrNilai : "<<*ptrNilai<<endl;
	cout<<"Alamat array nilai : "<<ptrNilai<<endl;
	cout<<"Nilai yang ada pada alamat : "<<ptrNilai<<" adalah "<<*ptrNilai<<endl;
	cout<<"Elemen array indeks pertama : "<<nilai[0]<<endl;
	cout<<"Elemen array (dengan array) : ";
	for	(int i = 0; i < 7; i++)
	{
		cout<<nilai[i]<<" ";
	}
	cout<<endl;
	cout<<"Elemen Array (dengan pointer) : ";
	for (int j = 0; j < 7; j++)
	{
		cout<<*(nilai+j)<<" ";
	}	
}

