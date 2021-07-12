#include<iostream>
#include<string>
using namespace std;

int main()
{
	string nama;
	char pilihan;
	do
	{
		cout<<"Masukkan nama: ";
		cin>>nama;
		cout<<"Halo, "<<nama<<endl;
		
		cout<<"Lagi? Y/n"<<endl;
		cout<<"Jawab: ";
		cin>>pilihan;
	}
	while(pilihan == 'y' || pilihan == 'Y');
	
	return 0;
}

