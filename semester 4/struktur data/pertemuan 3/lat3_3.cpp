#include<iostream>
using namespace std;

struct Mahasiswa
{
	char nim[15];
	char nama[25];
	char alamat[50];
	short umur;
};

int main()
{
	Mahasiswa mhs[3];
	cout<<"Program Biodata Mahasiswa"<<endl;
	
	for (int i = 0; i < 3; i++)
	{
		cout<<"Biodata Mahasiswa Ke-"<<i+1<<endl;
		cout<<"NIM \t\t: ";
		cin>>mhs[i].nim;
		cout<<"Nama \t\t: ";
		cin>>mhs[i].nama;
		cout<<"Alamat \t\t: ";
		cin>>mhs[i].alamat;
		cout<<"Umur \t\t: ";
		cin>>mhs[i].umur;
		cout<<endl;
	}
	
	cout<<"Detail Biodata Mahasiswa"<<endl;
	
	for (int j = 0; j < 3; j++)
	{
		cout<<"Biodata Mahasiswa Ke-"<<j+1<<endl;
		cout<<"NIM \t\t: "<<mhs[j].nim<<endl;	
		cout<<"Nama \t\t: "<<mhs[j].nama<<endl;
		cout<<"Alamat \t\t: "<<mhs[j].alamat<<endl;
		cout<<"Umur \t\t: "<<mhs[j].umur<<endl;	
	}
}

