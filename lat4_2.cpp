#include<iostream>
#include<locale> // digunakan untuk str to lower
#include <cmath> // digunakan untuk penggunaan sqrt (akar kuadrat)
using namespace std;

int main()
{
	// digunakan untuk str to lower
	locale loc;
	
	// mendeklarasikan variabel
	float pi = 3.14;
	float luas_segitiga, keliling_segitiga, alas, tinggi, sisi;
	float luas_persegi_panjang, keliling_persegi_panjang, panjang, lebar;
	float luas_lingkaran, keliling_lingkaran, r;
	
	char pilihan;
	
	cout<<"kode S : untuk segitiga"<<endl;
	cout<<"kode P : untuk Persegi panjang"<<endl;
	cout<<"kode L : untuk lingkaran"<<endl;
	cout<<"Pilih rumus bangun datar: ";
	cin>>pilihan;
	
	// ubah menjadi to lower string
	pilihan = tolower(pilihan, loc);
	
	switch(pilihan)
	{
		case 's':
			cout<<"Rumus Segitiga"<<endl;
			cout<<"Masukkan alas: ";
			cin>>alas;
			cout<<"Masukkan tinggi: ";
			cin>>tinggi;
			
			luas_segitiga = (alas * tinggi) / 2;
			
			sisi = sqrt((alas * alas) + (tinggi * tinggi));
			keliling_segitiga = alas + tinggi + sisi;
			
			cout<<"Luas segitiga: "<<luas_segitiga<<endl;
			cout<<"Keliling segitiga: "<<keliling_segitiga<<endl;
			break;
		case 'p':
			cout<<"Rumus Persegi Panjang"<<endl;
			cout<<"Masukkan panjang: ";
			cin>>panjang;
			cout<<"Masukkan lebar: ";
			cin>>lebar;
			
			luas_persegi_panjang = panjang * lebar;
			keliling_persegi_panjang = 2 * (panjang + lebar);
			cout<<"Luas persegi panjang: "<<luas_persegi_panjang<<endl;
			cout<<"Keliling persegi panjang: "<<keliling_persegi_panjang<<endl;
			break;
		case 'l':
			cout<<"Rumus Lingkaran"<<endl;
			cout<<"Masukkan jari-jari: ";
			cin>>r;
			
			luas_lingkaran = pi * r * r;
			keliling_lingkaran = 2 * pi * r;
			
			cout<<"Luas lingkaran: "<<luas_lingkaran<<endl;
			cout<<"Keliling lingkaran: "<<keliling_lingkaran<<endl;
			break;
		default:
			cout<<"Kode yang anda masukkan salah!"<<endl;
	}
}

