#include<iostream>
#include<conio.h>
#include <string.h>
using namespace std;

struct Tinggal
{
	char Jalan[50];
	char Kota[50]; 
	char Kode_Pos[6];
};

struct Tanggal
{
	int Tanggal;
	int Bulan;
	int Tahun;
};

struct Biodata
{
	char Nip[11];
	char Nama[50];
	Tinggal Alamat;
	char Jabatan[20];
	char Agama[20];
	Tanggal Tanggal_Lahir;
	Tanggal Tanggal_Mulai_Kerja;
	char Unit_Kerja[15];
};

int main()
{
	int i, dataKe, n;
	char nip[11];
	bool ketemu;
	
	cout<<"Program Biodata Pegawai"<<endl;
	cout<<"--------------------------------------"<<endl;
	cout<<"Masukkan banyak pegawai: ";
	cin>>n;
	cin.ignore(1000, '\n');
	
	Biodata Bio[n];
	
	for	(i = 0; i < n; i++)
	{
		cout<<"Biodata Pegawai ke-"<<i+1<<endl;
		cout<<"NIP \t\t: ";
		cin.getline(Bio[i].Nip, 11);
		cout<<"Nama \t\t: ";
		cin.getline(Bio[i].Nama, 50);
		cout<<"Alamat: "<<endl;
		cout<<"\tJalan \t\t: ";
		cin.getline(Bio[i].Alamat.Jalan, 50);
		cout<<"\tKota \t\t: ";
		cin.getline(Bio[i].Alamat.Kota, 50);
		cout<<"\tKode Pos \t: ";
		cin.getline(Bio[i].Alamat.Kode_Pos, 6);
		cout<<"Jabatan \t: ";
		cin.getline(Bio[i].Jabatan, 20);
		cout<<"Agama \t\t: ";
		cin.getline(Bio[i].Agama, 20);
		cout<<"Tanggal Lahir: "<<endl;
		cout<<"\tTanggal \t: ";
		cin>>Bio[i].Tanggal_Lahir.Tanggal;
		cout<<"\tBulan \t\t: ";
		cin>>Bio[i].Tanggal_Lahir.Bulan;
		cout<<"\tTahun \t\t: ";
		cin>>Bio[i].Tanggal_Lahir.Tahun;
		cout<<"Tanggal Mulai kerja: "<<endl;
		cout<<"\tTanggal \t: ";
		cin>>Bio[i].Tanggal_Mulai_Kerja.Tanggal;
		cout<<"\tBulan \t\t: ";
		cin>>Bio[i].Tanggal_Mulai_Kerja.Bulan;
		cout<<"\tTahun \t\t: ";
		cin>>Bio[i].Tanggal_Mulai_Kerja.Tahun;
		cout<<"Unit Kerja \t: ";
		cin>>Bio[i].Unit_Kerja;
		cin.ignore(1000, '\n');
		cout<<"--------------------------------------"<<endl;
	}
	
	cout<<"Daftar Biodata Pegawai"<<endl;
	cout<<"--------------------------------------"<<endl;
	for (i = 0; i < n; i++)
	{
		cout<<"Biodata Pegawai ke-"<<i+1<<endl;
		cout<<"NIP \t\t: "<<Bio[i].Nip<<endl;
		cout<<"Nama \t\t: "<<Bio[i].Nama<<endl;
		cout<<"--------------------------------------"<<endl;
	}
	
	// melakukan pencarian
	cout<<"\nMasukkan NIP pegawai yang ingin dicari: ";
	cin.getline(nip, 11);

	for (i = 0; i < n; i++)
	{
		// jika strcmp me-return 0 berarti true
		if (strcmp(Bio[i].Nip, nip) == 0)
		{
			dataKe = i;
			ketemu = true;
		}
	}
	
	if (ketemu)
	{
		cout<<"NIP \t\t: "<<Bio[dataKe].Nip<<endl;
		cout<<"Nama \t\t: "<<Bio[dataKe].Nama<<endl;
		cout<<"Alamat: "<<endl;
		cout<<"\tJalan \t\t: "<<Bio[dataKe].Alamat.Jalan<<endl;
		cout<<"\tKota \t\t: "<<Bio[dataKe].Alamat.Kota<<endl;
		cout<<"\tKode Pos \t: "<<Bio[dataKe].Alamat.Kode_Pos<<endl;
		cout<<"Jabatan \t: "<<Bio[dataKe].Jabatan<<endl;
		cout<<"Agama \t\t: "<<Bio[dataKe].Agama<<endl;
		cout<<"Tanggal Lahir: "<<endl;
		cout<<"\tTanggal \t: "<<Bio[dataKe].Tanggal_Lahir.Tanggal<<endl;
		cout<<"\tBulan \t\t: "<<Bio[dataKe].Tanggal_Lahir.Bulan<<endl;
		cout<<"\tTahun \t\t: "<<Bio[dataKe].Tanggal_Lahir.Tahun<<endl;
		cout<<"Tanggal Mulai kerja: "<<endl;
		cout<<"\tTanggal \t: "<<Bio[dataKe].Tanggal_Mulai_Kerja.Tanggal<<endl;
		cout<<"\tBulan \t\t: "<<Bio[dataKe].Tanggal_Mulai_Kerja.Bulan<<endl;
		cout<<"\tTahun \t\t: "<<Bio[dataKe].Tanggal_Mulai_Kerja.Tahun<<endl;
		cout<<"Unit Kerja \t: "<<Bio[dataKe].Unit_Kerja<<endl;
		cout<<endl;
	}
	else
	{
		cout<<"Data pegawai dengan NIP "<<nip<<" tidak ditemukan";
	}
	
	getch();
}

