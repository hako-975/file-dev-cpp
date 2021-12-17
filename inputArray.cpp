#include<iostream>
using namespace std;

int main()
{
	int angka[10];
	int lengthArray = sizeof(angka)/sizeof(angka[0]);
	
	// menginput nilai
	for (int i = 0; i < lengthArray; i++)
	{
		cout<<"Masukkan data ke-"<<i+1<<": ";
		cin>>angka[i];
	}
	cout<<endl;
	
	// menampilkan isi
	for (int i = 0; i < lengthArray; i++)
	{
		cout<<"Isi data array ke-"<<i<<" adalah "<<angka[i]<<endl;	
	}
	
}
