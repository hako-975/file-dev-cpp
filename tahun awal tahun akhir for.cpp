#include<iostream>
using namespace std;

int main()
{
	int tahun_awal, tahun_akhir;
	
	cout<<"Menampilkan sortir dari tahun awal sampai tahun akhir"<<endl;
	cout<<"Masukkan tahun awal: ";
	cin>>tahun_awal;
	cout<<"Masukkan tahun akhir: ";
	cin>>tahun_akhir;
	
	for(tahun_awal; tahun_awal <= tahun_akhir; tahun_awal++)
	{
		cout<<tahun_awal<<endl;
	}
	
	return 0;
}

