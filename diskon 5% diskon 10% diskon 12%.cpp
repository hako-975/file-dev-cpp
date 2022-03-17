#include <iostream>
 
using namespace std;
 
int main()
{
  int total_belanja, harga_akhir;
  char pilih;
  
  do {
	system("cls");
	cout << "##  Program C++ Diskon Potongan Harga  ##" << endl;
	cout << "=========================================" << endl;
	cout << endl;

	cout << "Total Belanja: Rp.";
	cin >> total_belanja;
	cout << endl;
	
	if (total_belanja >= 50000) 
	{
		harga_akhir = total_belanja - ((5 * total_belanja) / 100);
		cout << "Selamat, anda mendapat diskon 5%" << endl;
	}
	else if (total_belanja >= 400000) 
	{
		harga_akhir = total_belanja - ((10 * total_belanja) / 100);
		cout << "Selamat, anda mendapat diskon 10%" << endl;
	}
	else if (total_belanja >= 1200000) {
		harga_akhir = total_belanja - ((12 * total_belanja) / 100);
		cout << "Selamat, anda mendapat diskon 12%" << endl;
	} 
	else {
		harga_akhir = total_belanja;
	}
	
	cout << "Total bayar: Rp." << harga_akhir << endl;
  	cout << "Menghitung lagi? Y/t"<<endl;
	cin >> pilih;
  } while (pilih == 'y' || pilih == 'Y');
 
  return 0;
}
