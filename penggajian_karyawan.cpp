#include<iostream>
#include<conio.h>
#include<string>

using namespace std;

int main()
{
	string nama_karyawan[10];
	int jumlah_karyawan, 
		tunjangan_pengabdian[10],
		jam_kerja[10], 
		jam_lembur[10], 
		golongan[10],
		gaji_pokok[10], 
		gaji_lembur[10], 
		pajak_gaji_pokok[10], 
		pajak_gaji_lembur[10],
		total_pajak[10],
		gaji_bersih[10];
	
	cout<<"Aplikasi Penggajian Karyawan"<<endl;
	cout<<"Masukkan jumlah karyawan: ";
	cin>>jumlah_karyawan;
	
	for	(int i = 1; i <= jumlah_karyawan; i++)
	{
		cout<<"Karyawan ke-"<<i<<endl;
		cout<<"Masukkan Nama Karyawan \t\t: ";
		cin>>nama_karyawan[i];
		cout<<"Masukkan Golongan \t\t: ";
		cin>>golongan[i];
		cout<<"Masukkan Jumlah Jam Kerja \t: ";
		cin>>jam_kerja[i];
		
		switch (golongan[i])
		{
			case 1:
				gaji_pokok[i] = 1486500;
				tunjangan_pengabdian[i] = 250000;
				break;
			case 2:
				gaji_pokok[i] = 1926000;
				tunjangan_pengabdian[i] = 300000;
				break;
			case 3:
				gaji_pokok[i] = 2456700;
				tunjangan_pengabdian[i] = 350000;
				break;
			case 4:
				gaji_pokok[i] = 2899500;
				tunjangan_pengabdian[i] = 400000;
				break;
			default:
				gaji_pokok[i] = 0;
				tunjangan_pengabdian[i] = 0;
				break;
		}
		
		if (jam_kerja[i] > 173)
		{
			jam_lembur[i] = jam_kerja[i] - 173;
		}
		else
		{
			jam_lembur[i] = 0;
		}
		
		gaji_lembur[i] = jam_lembur[i] * 20000;
		pajak_gaji_pokok[i] = 0.05 * gaji_pokok[i];
		pajak_gaji_lembur[i] = 0.05 * gaji_lembur[i];
		total_pajak[i] = pajak_gaji_pokok[i] + pajak_gaji_lembur[i];
		gaji_bersih[i] = (gaji_pokok[i] + tunjangan_pengabdian[i] + gaji_lembur[i] - total_pajak[i]);
		cout<<endl;
	}
	
	cout<<"PROGRAM MENGHITUNG GAJI KARYAWAN"<<endl;
	for	(int i = 1; i <= jumlah_karyawan; i++)
	{
		cout<<"Karyawan ke \t\t: "<<i<<endl;
		cout<<"Nama Karyawan \t\t: "<<nama_karyawan[i]<<endl;
		cout<<"Gaji Pokok \t\t: "<<gaji_pokok[i]<<endl;
		cout<<"Gaji Lembur \t\t: "<<gaji_lembur[i]<<endl;
		cout<<"Pajak Gaji Pokok \t: "<<pajak_gaji_pokok[i]<<endl;
		cout<<"Pajak Lembur \t\t: "<<pajak_gaji_lembur[i]<<endl;
		cout<<"Total Pajak \t\t: "<<total_pajak[i]<<endl;
		cout<<"Tunjangan Pengabdian \t: "<<tunjangan_pengabdian[i]<<endl;
		cout<<"Gaji Diterima  \t\t: "<<gaji_bersih[i]<<endl;
		
		cout<<endl;
	}
	
	getch();
}

