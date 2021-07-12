#include<iostream>

using namespace std;

int main()
{
	// Mendeklarasikan variable
	int gaji_pokok, 
		total_jam_kerja, 
		total_jam_kerja_normal = 40, 
		terlambat, 
		bonus_kelebihan_jam_kerja, 
		total_gaji, 
		bonus_terlambat, 
		bonus_tidak_terlambat;
	
	//	header
	cout<<"Aplikasi Menghitung Gaji Pegawai By Andri Firman Saputra"<<endl;
	cout<<"-------------------------------------------------------------"<<endl;
	
	cout<<"Masukkan Gaji Pokok (Rupiah) \t\t: ";
	cin>>gaji_pokok;
	
	cout<<"Masukkan Total Jam Kerja (Per minggu) \t: ";
	cin>>total_jam_kerja;
	
	cout<<"Masukkan Total Terlambat (hari) \t: ";
	cin>>terlambat;
	
	total_jam_kerja -= total_jam_kerja_normal;
	bonus_kelebihan_jam_kerja = gaji_pokok * total_jam_kerja * 5 / 100;
	bonus_tidak_terlambat = gaji_pokok * 10 / 100;
	bonus_terlambat = gaji_pokok * (10 - terlambat) / 100;
	
	cout<<"-------------------------------------------------------------"<<endl;
	
	cout<<"Gaji Pokok \t\t\t\t: Rp. "<<gaji_pokok<<endl;
	cout<<"Bonus Kelebihan Jam Kerja ("<<total_jam_kerja<<") jam \t: Rp. "<<bonus_kelebihan_jam_kerja<<endl;
	if (terlambat <= 0)
	{
		cout<<"Bonus Tidak Telat (10% * GP) \t\t: Rp. "<<bonus_tidak_terlambat<<endl;	
		total_gaji = gaji_pokok + bonus_kelebihan_jam_kerja + bonus_tidak_terlambat;
	}
	else 
	{
		cout<<"Bonus Terlambat ("<<terlambat<<") hari \t\t: Rp. "<<bonus_terlambat<<endl;
		total_gaji = gaji_pokok + bonus_kelebihan_jam_kerja + bonus_terlambat;
	}
	cout<<"-------------------------------------------------------------"<<endl;
	cout<<"Total Gaji \t\t\t\t: Rp. "<<total_gaji<<endl;
}
