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
	Mahasiswa mhs;
	cout<<"Program Biodata Mahasiswa"<<endl;
	cout<<"NIM \t\t: ";
	cin.getline(mhs.nim, 15);
	cout<<"Nama \t\t: ";
	cin.getline(mhs.nama, 25);
	cout<<"Alamat \t\t: ";
	cin.getline(mhs.alamat, 50);
	cout<<"Umur \t\t: ";
	cin>>mhs.umur;
	cout<<endl;
	cout<<"Detail Biodata Mahasiswa"<<endl;
	cout<<"NIM \t\t: "<<mhs.nim<<endl;	
	cout<<"Nama \t\t: "<<mhs.nama<<endl;
	cout<<"Alamat \t\t: "<<mhs.alamat<<endl;
	cout<<"Umur \t\t: "<<mhs.umur<<endl;	
}

