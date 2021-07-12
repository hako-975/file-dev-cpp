#include<iostream>

using namespace std;

int main()
{
	float nilai_kalkulus, 
		nilai_fisika_dasar, 
		nilai_pti, 
		nilai_sistim_digital, 
		nilai_pso, 
		nilai_logika_matematika, 
		nilai_bahasa_inggris, 
		nilai_agama,
		nilai_ipk;
		
	// float nilai_sks[8] = {4, 3, 2, 2, 2, 2, 2, 2};
	
	// Header
	cout<<"Aplikasi Menghitung Nilai IPK"<<endl;
	cout<<"------------------------------"<<endl;
	cout<<"Masukkan Nilai dari 0 sampai 4"<<endl;
	cout<<"------------------------------"<<endl;
	// Input Nilai Kalkulus
	cout<<"Masukkan Nilai Kalkulus : ";
	cin>>nilai_kalkulus;
	cout<<endl;

	// Input Nilai Fisika Dasar
	cout<<"Masukkan Nilai Fisika Dasar : ";
	cin>>nilai_fisika_dasar;
	cout<<endl;

	// Input Nilai PTI
	cout<<"Masukkan Nilai PTI : ";
	cin>>nilai_pti;
	cout<<endl;

	// Input Nilai Sistim Digital
	cout<<"Masukkan Nilai Sistim Digital : ";
	cin>>nilai_sistim_digital;
	cout<<endl;

	// Input Nilai PSO
	cout<<"Masukkan Nilai PSO : ";
	cin>>nilai_pso;
	cout<<endl;

	// Input Nilai Logika Matematika
	cout<<"Masukkan Nilai Logika Matematika : ";
	cin>>nilai_logika_matematika;
	cout<<endl;

	// Input Nilai Bahasa Inggris
	cout<<"Masukkan Nilai Bahasa Inggris : ";
	cin>>nilai_bahasa_inggris;
	cout<<endl;

	// Input Nilai Agama
	cout<<"Masukkan Nilai Agama : ";
	cin>>nilai_agama;
	cout<<endl;
	
	nilai_ipk = (nilai_kalkulus + 
		  nilai_fisika_dasar + 
		  nilai_pti + 
		  nilai_sistim_digital + 
		  nilai_pso + 
		  nilai_logika_matematika + 
		  nilai_bahasa_inggris + 
		  nilai_agama) / 8;
	
	if(nilai_ipk == 4)
	{
		cout<<"Nilai IPK adalah : A"<<" dengan rata-rata : "<<nilai_ipk;
	}
	else if(nilai_ipk >= 3)
	{
		cout<<"Nilai IPK adalah : B"<<" dengan rata-rata : "<<nilai_ipk;
	}
	else if(nilai_ipk >= 2)
	{
		cout<<"Nilai IPK adalah : C"<<" dengan rata-rata : "<<nilai_ipk;
	}
	else if(nilai_ipk >= 1)
	{
		cout<<"Nilai IPK adalah : D"<<" dengan rata-rata : "<<nilai_ipk;
	}
	else if(nilai_ipk < 1)
	{
		cout<<"Nilai IPK adalah : E"<<" dengan rata-rata : "<<nilai_ipk;
	}
	else
	{
		cout<<"Nilai IPK dengan rata-rata : "<<nilai_ipk;
	}
}
