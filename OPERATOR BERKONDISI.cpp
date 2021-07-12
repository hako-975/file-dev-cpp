#include<iostream>
using namespace std;

int main()
{
	int x, y, maks;
	
	cout<<"Masukkan sebuah bilangan bulat : ";
	cin>>x;
	
	cout<<"Masukkan lagi sebuah bilangan bulat : ";
	cin>>y;
	
	// menggunakan operator ternary
	maks = x > y ? x : y;
	cout<<"Bilangan terbesar : "<<maks<<endl;
}

