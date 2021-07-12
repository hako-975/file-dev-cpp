#include<iostream>
using namespace std;

int main()
{
	// mendeklarasikan variable
	int a[4], urut = 1, total = 0;
		
	cout<<"Program mencetak empat buah bilangan bulat dan totalnya"<<endl;
	cout<<"--------------------------------"<<endl;
	for(int i=0; i< 4; i++)
	{
		cout<<"Masukkan Angka ke "<<urut++<<" : ";
		cin>>a[i];
		total += a[i];
	}
	cout<<"--------------------------------"<<endl;

	cout<<"Total Angka : "<<total;
}
