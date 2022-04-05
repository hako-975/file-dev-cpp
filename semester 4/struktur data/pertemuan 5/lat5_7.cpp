#include<iostream>
#include<conio.h>
using namespace std;

struct Mahasiswa
{
	char Nim[13];
	char Nama[25];
	char Alamat[40];
	short Umur;
};

void Baca(Mahasiswa *Mhs);
void Cetak(Mahasiswa *Mhs);

int main()
{
	Mahasiswa Mhs;
	cout<<"Membaca Nilai Anggota Struktur"<<endl;
	Baca(&Mhs);
	cout<<"Mencetak Nilai Anggota Struktur"<<endl;
	Cetak(&Mhs);
	getch();
}

void Baca(Mahasiswa *Mhs)
{
	cout<<"NIM: ";
	cin.getline(Mhs->Nim, 13);
	cout<<"Nama: ";
	cin.getline(Mhs->Nama, 25);
	cout<<"Alamat: ";
	cin.getline(Mhs->Alamat, 40);
	cout<<"Umur: ";
	cin>>Mhs->Umur;
	cout<<endl;
}

void Cetak(Mahasiswa *Mhs)
{
	cout<<"NIM: "<<Mhs->Nim<<endl;
	cout<<"Nama: "<<Mhs->Nama<<endl;
	cout<<"Alamat: "<<Mhs->Alamat<<endl;
	cout<<"Umur: "<<Mhs->Umur<<endl;
}

