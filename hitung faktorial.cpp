#include<iostream>

using namespace std;

int faktorial(int n, int hasil)
{
	for(int i = 1; i <=n; ++i) 
	{
		hasil *= i;
	}
	return hasil;
}

int main()
{
	int n, hasil = 1;
	cout<<"Masukkan bilangan bulat: ";
	cin>>n;
	cout <<"Faktorial dari "<<n<<"! = "<<faktorial(n, hasil);
	return 0;
}

