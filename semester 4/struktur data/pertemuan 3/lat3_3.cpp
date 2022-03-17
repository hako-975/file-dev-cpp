#include<iostream>
using namespace std;

struct Mahasiswa
{
	char Nim[15];
	char Nama[25];
	char Alamat[50];
	short Umur;
};

int main()
{
	Mahasiswa Mhs[3];
	cout<<"Program Biodata Mahasiswa"<<endl;
	
	for (int i = 0; i < 3; i++)
	{
		cout<<"Biodata Mahasiswa Ke-"<<i+1<<endl;
		cout<<"NIM \t\t: ";
		cin>>Mhs[i].Nim;
		cout<<"Nama \t\t: ";
		cin>>Mhs[i].Nama;
		cout<<"Alamat \t\t: ";
		cin>>Mhs[i].Alamat;
		cout<<"Umur \t\t: ";
		cin>>Mhs[i].Umur;
		cout<<endl;
	}
	
	cout<<"Detail Biodata Mahasiswa"<<endl;
	
	for (int j = 0; j < 3; j++)
	{
		cout<<"Biodata Mahasiswa Ke-"<<j+1<<endl;
		cout<<"NIM \t\t: "<<Mhs[j].Nim<<endl;	
		cout<<"Nama \t\t: "<<Mhs[j].Nama<<endl;
		cout<<"Alamat \t\t: "<<Mhs[j].Alamat<<endl;
		cout<<"Umur \t\t: "<<Mhs[j].Umur<<endl;	
	}
}

