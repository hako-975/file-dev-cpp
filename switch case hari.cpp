#include<iostream>
using namespace std;

int main()
{
	int kodeHari;
	cout<<"Masukkan kode hari [1-7]: ";
	cin>>kodeHari;
	
	switch(kodeHari)
	{
		case 1:
			cout<<"Senin"<<endl;
			break;
		case 2:
			cout<<"Selasa"<<endl;
			break;
		case 3:
			cout<<"Rabu"<<endl;
			break;
		case 4:
			cout<<"Kamis"<<endl;
			break;
		case 5:
			cout<<"Jumat"<<endl;
			break;
		case 6:
			cout<<"Sabtu"<<endl;
			break;
		case 7:
			cout<<"Minggu"<<endl;
			break;
		default:
			cout<<"Kode tidak ada"<<endl;
	}
}
