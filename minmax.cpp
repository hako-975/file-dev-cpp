#include<iostream>
using namespace std;

int main()
{
	int nilai_1, nilai_2, nilai_3, nilai_4;
	
	cout<<"Masukkan Nilai 1 : ";
	cin>>nilai_1;
	
	cout<<"Masukkan Nilai 2 : ";
	cin>>nilai_2;
	
	cout<<"Masukkan Nilai 3 : ";
	cin>>nilai_3;
	
	cout<<"Masukkan Nilai 4 : ";
	cin>>nilai_4;
	
	if(nilai_1 > nilai_2 && nilai_1 > nilai_3 && nilai_1 > nilai_4)
	{
		cout<<"Nilai terbesar : "<<nilai_1;
	}

	else if(nilai_2 > nilai_1 && nilai_2 > nilai_3 && nilai_2 > nilai_4)
	{
		cout<<"Nilai terbesar : "<<nilai_2;
	}

	else if(nilai_3 > nilai_1 && nilai_3 > nilai_2 && nilai_3 > nilai_4)
	{
		cout<<"Nilai terbesar : "<<nilai_3;
	}
	
	else if(nilai_4 > nilai_1 && nilai_4 > nilai_2 && nilai_4 > nilai_3)
	{
		cout<<"Nilai terbesar : "<<nilai_4;
	}
	else
	{
		cout<<"Nilai ke-1 : "<<nilai_1<<endl;
		cout<<"Nilai ke-2 : "<<nilai_2<<endl;
		cout<<"Nilai ke-3 : "<<nilai_3<<endl;
		cout<<"Nilai ke-4 : "<<nilai_4<<endl;
	}
}

