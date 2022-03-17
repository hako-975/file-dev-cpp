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
	Mahasiswa Mhs;
	cout<<"Program Biodata Mahasiswa"<<endl;
	cout<<"NIM \t\t: ";
	cin.getline(Mhs.Nim, 15);
	cout<<"Nama \t\t: ";
	cin.getline(Mhs.Nama, 25);
	cout<<"Alamat \t\t: ";
	cin.getline(Mhs.Alamat, 50);
	cout<<"Umur \t\t: ";
	cin>>Mhs.Umur;
	cout<<endl;
	cout<<"Detail Biodata Mahasiswa"<<endl;
	cout<<"NIM \t\t: "<<Mhs.Nim<<endl;	
	cout<<"Nama \t\t: "<<Mhs.Nama<<endl;
	cout<<"Alamat \t\t: "<<Mhs.Alamat<<endl;
	cout<<"Umur \t\t: "<<Mhs.Umur<<endl;	
}

