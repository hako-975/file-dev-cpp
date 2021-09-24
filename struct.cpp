#include<iostream>
using namespace std;

typedef struct
{
	int akselerasi;
	int topSpeed;
	int jumlahPenumpang;
	bool kopling;
	string warna;
}mbl;
mbl mobil;

int main()
{
	char isKopling;
	
	cout<<"Spesifikasi Mobil"<<endl;
	
	cout<<"Masukkan Akselerasi Mobil (Km/Jam): ";
	cin>>mobil.akselerasi;
	
	cout<<"Masukkan Top Speed Mobil (Km/Jam): ";
	cin>>mobil.topSpeed;
	
	cout<<"Masukkan Jumlah Penumpang Mobil: ";
	cin>>mobil.jumlahPenumpang;
	
	cout<<"Apakah Mobil Kopling (Y/T): ";
	cin>>isKopling;
	if (isKopling == 'Y' || isKopling == 'y')
	{
		mobil.kopling = true;
	}
	else
	{
		mobil.kopling = false;
	}
	
	cout<<"Masukkan Warna Mobil: ";
	cin>>mobil.warna;
	
	cout<<endl;
	
	// mencetak hasil inputan
	cout<<"Akselerasi Mobil (Km/Jam): "<<mobil.akselerasi<<endl;
	cout<<"Top Speed Mobil (Km/Jam): "<<mobil.topSpeed<<endl;
	cout<<"Jumlah Penumpang Mobil: "<<mobil.jumlahPenumpang<<endl;
	cout<<"Jenis Mobil: ";
	if (mobil.kopling == true)
	{
		cout<<"Kopling"<<endl;	
	}
	else
	{
		cout<<"Bukan Kopling"<<endl;
	}
	
	cout<<"Warna Mobil: "<<mobil.warna<<endl;
}

