#include<iostream>
using namespace std;

int main()
{
	int harga_beli;
	
	cout<<"Masukkan Harga Pembelian: ";
	cin>>harga_beli;
	if (100000 <= harga_beli && harga_beli < 200000)
	{
		cout<<"Discount 5%";
	}
	else if (200000 <= harga_beli && harga_beli < 300000)
	{
		cout<<"Tiket ke Yogya";
	}
	else if (300000 <= harga_beli && harga_beli < 400000)
	{
		cout<<"Tiket ke Bali";
	}
	else if (400000 <= harga_beli && harga_beli < 500000)
	{
		cout<<"Jam Tangan Rolex";
	}
	else if (harga_beli > 500000)
	{
		cout<<"Tiket ke Swiss";
	}
	else
	{
		cout<<"Coba Lagi"<<endl;
	}
	
	return 0;
}

