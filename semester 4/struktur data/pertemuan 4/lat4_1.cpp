#include<iostream>
using namespace std;

int main()
{
	int x = 8;
	int *xPtr;
	xPtr = &x;
	
	cout<<"Nilai X = "<<x<<endl;
	cout<<"Alamat X = "<<&x<<endl;
	cout<<"Alamat X = "<<xPtr<<endl;
	cout<<"Nilai yang disimpan pada alamat"<<endl;
	cout<<xPtr<<" adalah "<<*xPtr;
}

