#include<iostream>
#include<string>
using namespace std;

int main()
{
	int jml_karyawan, gaji_per_bulan, jml_anak;
	char status_menikah;
	string nama;
	cout<<"\t Data Karyawan"<<endl;
	cout<<"\t --------------------------------"<<endl;
	cout<<"\t Masukkan jumlah karyawan \t: ";
	cin>>jml_karyawan;
	cout<<"\t --------------------------------"<<endl;
	
	for(int i = 0; i < jml_karyawan; i++)
	{
		cout<<"\t Karyawan ke-"<<i+1<<endl;
		cout<<"\t Masukkan nama \t\t\t: ";
		// ws = whitespace
		getline(cin>>ws, nama);
		cout<<"\t Masukkan gaji per bulan \t: ";
		cin>>gaji_per_bulan;
		cout<<"\t Masukkan status menikah (s/b) \t: ";
		cin>>status_menikah;
		if(status_menikah == 's')
		{
			cout<<"\t Masukkan jumlah anak \t\t: ";
			cin>>jml_anak;
		}
		else
		{
			jml_anak = 0;
		}
	}
}

