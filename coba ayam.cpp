#include<iostream>
#include<string>

using namespace std;

int i,
	jenis_ayam, 
	satuan_beli, 
	jml_beli,
	harga,
	sub_total,
	total,
	diskon,
	pembayaran,
	kembalian,
	harga_broiler_kg = 14000, 
	harga_broiler_ekor = 30000, 
	harga_kampung_kg = 25000, 
	harga_kampung_ekor = 60000;
	
char beli_lagi;
string x[100];

void penjualan()
{
	sub_total = 0;
	i = 0;
	do
	{
		cout<<endl;
		cout<<"\t ------------------------------------"<<endl;
		cout<<"\t Sub Total: "<<sub_total<<endl;
		cout<<"\t ------------------------------------"<<endl;
		cout<<endl;
		
		cout<<"\t Daftar Harga Ayam"<<endl;
		cout<<"\t ------------------------------------"<<endl;
		cout<<"\t Ayam Broiler per kg \t: Rp. "<<harga_broiler_kg<<endl;
		cout<<"\t Ayam Broiler per ekor \t: Rp. "<<harga_broiler_ekor<<endl;
		cout<<"\t Ayam Kampung per kg \t: Rp. "<<harga_kampung_kg<<endl;
		cout<<"\t Ayam Kampung per ekor \t: Rp. "<<harga_kampung_ekor<<endl;
		cout<<"\t ------------------------------------"<<endl;
			
		cout<<"\t Daftar Jenis Ayam"<<endl;
		cout<<"\t ------------------------------------"<<endl;
		cout<<"\t 1. Ayam Broiler"<<endl;
		cout<<"\t 2. Ayam Kampung"<<endl;
		cout<<"\t 0. Selesai"<<endl;
		cout<<"\t ------------------------------------"<<endl;
		cout<<"\t Pilih Jenis Ayam: ";
		
		cin>>jenis_ayam;
		
		cout<<"\t ------------------------------------"<<endl;
		cout<<"\t Daftar Satuan Beli"<<endl;
		cout<<"\t ------------------------------------"<<endl;
		cout<<"\t 1. Per Kg"<<endl;
		cout<<"\t 2. Per Ekor"<<endl;
		cout<<"\t ------------------------------------"<<endl;
		cout<<"\t Pilih Satuan Beli: ";
		
		if(jenis_ayam == 1)
		{
			cin>>satuan_beli;
			if(satuan_beli == 1)
			{
				x[i] = "Ayam Broiler Per Kg";
				harga = harga_broiler_kg;
			}
			else if(satuan_beli == 2)
			{
				x[i] = "Ayam Broiler Per Ekor";
				harga = harga_broiler_ekor;
			}
		}
		else if(jenis_ayam == 2)
		{
			cin>>satuan_beli;
			if(satuan_beli == 1)
			{
				x[i] = "Ayam Kampung Per Kg";
				harga = harga_kampung_kg;
			}
			else if(satuan_beli == 2)
			{
				x[i] = "Ayam Kampung Per Ekor";
				harga = harga_kampung_ekor;
			}
		}
		else if(jenis_ayam == 0)
		{
			system("cls");
			break;
		}
			
	
		cout<<"\t ------------------------------------"<<endl;
		cout<<"\t Masukkan Jumlah Beli: ";
		cin>>jml_beli;
		x[i] = x[i] + "\t: " + to_string(jml_beli);
		sub_total += jml_beli * harga;
		cout<<"\t ------------------------------------"<<endl;
		cout<<"\t Apakah Mau Transaksi Lagi? Y/T: ";
		cin>>beli_lagi;
		system("cls");
		i++;
	}
	while(beli_lagi == 'y' || beli_lagi == 'Y');

	cout<<"\t Daftar Harga Ayam"<<endl;
	cout<<"\t ------------------------------------"<<endl;
	cout<<"\t Ayam Broiler per kg \t: Rp. "<<harga_broiler_kg<<endl;
	cout<<"\t Ayam Broiler per ekor \t: Rp. "<<harga_broiler_ekor<<endl;
	cout<<"\t Ayam Kampung per kg \t: Rp. "<<harga_kampung_kg<<endl;
	cout<<"\t Ayam Kampung per ekor \t: Rp. "<<harga_kampung_ekor<<endl;
	cout<<"\t ------------------------------------"<<endl;
	for(int j = 0; j < i; j++)
	{
		cout<<"\t "<<x[j]<<endl;
	}
	
	// Jika harga diatas sama dengan 100rb diskon 5%, diatas sama dengan 200rb diskon 12%, diatas sama dengan 300rb 25%	
	if(sub_total >= 100000)
	{
		diskon = (sub_total * 5) / 100;
	}
	else if(sub_total >= 200000)
	{
		diskon = (sub_total * 12) / 100;
	}
	else if(sub_total >= 300000)
	{
		diskon = (sub_total * 25) / 100;
	}
		
	total = sub_total - diskon;
	cout<<"\t ------------------------------------"<<endl;
	cout<<"\t Diskon \t: Rp. "<<diskon<<endl;
	cout<<"\t Sebelum Diskon : Rp. "<<sub_total<<endl;
	cout<<"\t Total Harga \t: Rp. "<<total<<endl;
	cout<<"\t ------------------------------------"<<endl;
	
	while(pembayaran < total)
	{
		cout<<"\t Masukkan Pembayaran : Rp. ";
		cin>>pembayaran;
		kembalian = pembayaran - total;
		if(pembayaran < total)
		{
			cout<<"\t Uang yang anda masukkan kurang"<<endl;
		}
		cout<<"\t ------------------------------------"<<endl;
	}
	
	cout<<"\t Kembalian \t: Rp. "<<kembalian<<endl;
	cout<<"\t ------------------------------------"<<endl;
}

int main()
{
	
	
	cout<<endl;
	cout<<"\t Program Penjualan Ayam"<<endl;
	penjualan();
	system("pause");
}
