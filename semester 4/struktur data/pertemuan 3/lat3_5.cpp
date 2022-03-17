#include<iostream>
using namespace std;

struct Nilai
{
	char Nim[15];
	char Nama[30];
	int Tugas;
	int UTS;
	int UAS;
	float Nilai_Akhir;
	char Nilai_Huruf;
};

int main()
{
	Nilai N;
	cout<<"Program Nilai Akhir Mahasiswa"<<endl;
	cout<<"NIM \t\t: ";
	cin.getline(N.Nim, 15);
	cout<<"Nama \t\t: ";
	cin.getline(N.Nama, 25);
	cout<<"Nilai Tugas \t: ";
	cin>>N.Tugas;
	cout<<"Nilai UTS \t: ";
	cin>>N.UTS;
	cout<<"Nilai UAS \t: ";
	cin>>N.UAS;
	
	N.Nilai_Akhir = (20 * N.Tugas / 100) + (35 * N.UTS / 100) + (45 * N.UAS / 100);
	if (N.Nilai_Akhir > 85 && N.Nilai_Akhir <= 100)
	{
		N.Nilai_Huruf = 'A';
	}
	else if (N.Nilai_Akhir > 70 && N.Nilai_Akhir <= 85)
	{
		N.Nilai_Huruf = 'B';
	}
	else if (N.Nilai_Akhir > 55 && N.Nilai_Akhir <= 70)
	{
		N.Nilai_Huruf = 'C';
	}
	else if (N.Nilai_Akhir > 40 && N.Nilai_Akhir <= 55)
	{
		N.Nilai_Huruf = 'D';
	}
	else if (N.Nilai_Akhir > 0 && N.Nilai_Akhir <= 40)
	{
		N.Nilai_Huruf = 'E';
	}
	cout<<endl;
	cout<<"NIM \t\t: "<<N.Nim<<endl;
	cout<<"Nama \t\t: "<<N.Nama<<endl;
	cout<<"Nilai Tugas \t: "<<N.Tugas<<endl;
	cout<<"Nilai UTS \t: "<<N.UTS<<endl;
	cout<<"Nilai UAS \t: "<<N.UAS<<endl;
	cout<<"Nilai Akhir : "<<N.Nilai_Akhir<<endl;
	cout<<"Nilai Huruf : "<<N.Nilai_Huruf<<endl;
}
