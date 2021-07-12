#include<iostream>
using namespace std;

int fungsiGenapGanjil(int angka)
{
	if(angka % 2 == 0)
	{
		cout<<"Genap"<<endl;
	}
	else
	{
		cout<<"Ganjil"<<endl;	
	}
}

int main()
{
	int angka;
	
	cout<<"Masukkan angka: ";
	cin>>angka;
	fungsiGenapGanjil(angka);
	
	return 0;	
}

