#include<iostream>
using namespace std;

struct Tinggal
{
	char Jalan[50];
	char Kota[50];
	char Pos[6];
};

struct Tgl_Lahir
{
	int Tanggal;
	int Bulan;
	int Tahun;
};

struct Mahasiswa
{
	char Nim[15];
	char Nama[50];
	Tinggal Alamat;
	Tgl_Lahir Lahir;
};

int main()
{
	Mahasiswa Mhs;
	cout<<"NIM \t: ";
	cin.getline(Mhs.Nim, 15);
	
	cout<<"Nama \t: ";
	cin.getline(Mhs.Nama, 50);
	
	cout<<"Alamat \t: "<<endl;
	cout<<"\t Jalan \t: ";
	cin.getline(Mhs.Alamat.Jalan, 50);
	cout<<"\t Kota \t: ";
	cin.getline(Mhs.Alamat.Kota, 50);
	cout<<"\t Kode Pos : ";
	cin.getline(Mhs.Alamat.Pos, 6);
	
	cout<<"Tanggal Lahir : "<<endl;
	cout<<"\t Tanggal: ";
	cin>>Mhs.Lahir.Tanggal;
	cout<<"\t Bulan \t: ";
	cin>>Mhs.Lahir.Bulan;
	cout<<"\t Tahun \t: ";
	cin>>Mhs.Lahir.Tahun;
	
	cout<<"\n\nMencetak kembali nilai anggota"<<endl;
	cout<<"NIM \t: "<<Mhs.Nim;
	cout<<"\nNama \t: "<<Mhs.Nama;
	cout<<"\nAlamat \t: "<<endl;
	cout<<"\tJalan \t: "<<Mhs.Alamat.Jalan;
	cout<<"\n\tKota \t: "<<Mhs.Alamat.Kota;
	cout<<"\n\tKode Pos: "<<Mhs.Alamat.Pos;
	cout<<"\nTanggal Lahir\t: "<<Mhs.Lahir.Tanggal<<"-"<<
	Mhs.Lahir.Bulan<<"-"<<Mhs.Lahir.Tahun<<endl;	
}
