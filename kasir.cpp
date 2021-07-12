#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() 
{
	// Mendeklarasikan variabel
	int jml_beli, bayar, diskon, total, kembalian, jumlah_barang[50], harga_barang[50], sub_total[50];
	string nama_barang[50];

	cout<<"PROGRAM C++ APLIKASI KASIR"<<endl;
	cout<<"---------------------------"<<endl;
	cout<<endl;
	cout<<"Masukan Jumlah Beli : ";
	cin>>jml_beli; // Pengguna memasukan jumlah beli
	
	for (int i=0; i < jml_beli; i++)
	{
		cout<<endl;
		cout<<"Masukan Barang Ke-"<<i+1<<endl;
		
		cout<<"Nama Barang \t\t: ";
		cin.ignore(); // untuk memungkinkan pengguna menginput spasi
	    getline(cin, nama_barang[i], '\n'); // Pengguna input nama barang disimpan pada array nama_barang
		
		cout<<"Jumlah Barang (satuan) \t: ";
		cin>>jumlah_barang[i]; // Pengguna input jumlah disimpan pada array jumlah
		
		cout<<"Harga Barang (satuan) \t: ";
		cin>>harga_barang[i]; // Pengguna input harga disimpan pada array harga
		
		sub_total[i]=jumlah_barang[i]*harga_barang[i]; // Menjumlahkan Harga sub total barang
		total+=sub_total[i]; // Menjumlahkan seluruh sub total barang
	}
	
	cout<<endl;
	cout<<"---------------------------------------------------------"<<endl;
	cout<<"No      Nama Barang     Jumlah      Harga      Sub Total"<<endl;
	for (int i = 0; i < jml_beli; i++)
	{
		cout<<i+1<<" "<<nama_barang[i]<<setw(10)<<jumlah_barang[i]<<setw(12)<<harga_barang[i]<<setw(12)<<sub_total[i]<<endl; // Menampilkan semua nilai array
	}
	cout<<"---------------------------------------------------------"<<endl;

	// Kondisi untuk menentukan diskon yang didapatkan berdasarkan total belanja
	// jika total harga diatas atau sama dengan 100.000 diberi diskon total harga dikali 0.09 dst
	if (total >= 100000)
	{
		diskon = 0.09 * total;
	} 
	else if (total >= 50000)
	{
		diskon = 0.06;
	}
	else if (total >= 25000)
	{
		diskon = 0.03;
	}
	else 
	{
		diskon = 0;
	}
	
	// Menampilkan Keterangan
	cout<<"Jumlah Bayar : Rp. "<<total<<endl; // Menampilkan jumlah bayar (belum termasuk diskon)
	cout<<"Diskon       : Rp. "<<diskon<<endl; // Menampilkan diskon
	cout<<"Total Bayar  : Rp. "<<((total-diskon) / 100) * 100<<endl; // Menampilkan total harga yang harus dibayar dan melakukan pembulatan uang
	cout<<"---------------------------------------------------------"<<endl;
	cout<<"Bayar        : Rp. ";
	cin>>bayar; // Input dari user untuk jumlah yang dibayar
	
	kembalian = (bayar-(total-diskon));
	
	// melakukan perulangan sampai uang yang dibayar pas
	for(int j=0; j < 1;)
	{
		if(kembalian < 0)
		{
			bayar = 0;
			cout<<"Uang Kurang  : Rp. "<<kembalian<<endl; // Jika kembalian kurang
			cout<<"Bayar        : Rp. ";
			cin>>bayar;
			kembalian = (bayar-(total-diskon));	
		}
		else
		{
			cout<<"Kembali      : Rp. "<<kembalian<<endl; // Menampilkan uang kembali
			j++;
		}
	}
}
