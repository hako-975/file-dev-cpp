#include<iostream>
using namespace std;

int main()
{
	int nomorHari;
	
	cout<<"Masukkan Nomor Hari : ";
	cin>>nomorHari;
	
	switch(nomorHari)
	{
		case 1:
			cout<<"Minggu"<<endl;
		break;
		
		case 2:
			cout<<"Senin"<<endl;
		break;
		
		case 3:
			cout<<"Selasa"<<endl;
		break;
		
		case 4:
			cout<<"Rabu"<<endl;
		break;
		
		case 5:
			cout<<"Kamis"<<endl;
		break;
		
		case 6:
			cout<<"Jum'at'"<<endl;
		break;
		
		case 7:
			cout<<"Sabtu"<<endl;
		break;
		
		default:
			cout<<"Nomor tidak Sesuai"<<endl;
	}
}

