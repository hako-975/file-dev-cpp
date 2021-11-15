#include<iostream>
using namespace std;

int main()
{
	int harga1 = 1000;
	int harga2 = 1500;
	int harga3 = 2000;
	int harga4 = 3000;
	char pilihan;
	int luas;
	int total;
	int kubikPertama;
	int kubikKedua;
	int kubikKetiga;
	int kubikKeempat;

	cout<<"Program Menghitung debit air by Andri Firman Saputra"<<endl;
	cout<<"----------------------------------------------------"<<endl;
	do
	{
		cout<<"Masukkan luas air pam yang digunakan (m kubik): ";
		cin>>luas;
		
		if (luas <= 50)
		{
			total = luas * harga1;
		}
		else if (luas > 50 && luas <= 100)
		{
			kubikKedua = luas - 50;
			kubikPertama = luas - kubikKedua;
			total = (kubikPertama * harga1) + (kubikKedua * harga2);
		}
		else if (luas > 100 && luas <= 150)
		{
			kubikKetiga = luas - 100;
			kubikKedua = luas - 50 - kubikKetiga;
			kubikPertama = luas - kubikKetiga - kubikKedua;
			total = (kubikPertama * harga1) + (kubikKedua * harga2) + (kubikKetiga * harga3);
		}
		else if (luas > 150)
		{
			kubikKeempat = luas - 150;
			kubikKetiga = luas - 100 - kubikKeempat;
			kubikKedua = luas - 50 - kubikKetiga - kubikKeempat;
			kubikPertama = luas - kubikKeempat - kubikKetiga - kubikKedua;
			total = (kubikPertama * harga1) + (kubikKedua * harga2) + (kubikKetiga * harga3) + (kubikKeempat * harga4);
		}
		
		cout<<"Total: "<<total<<endl;
		cout<<"Apakah ingin menghitung lagi? Y/t: ";
		cin>>pilihan;
		system("cls");
	}
	while(pilihan == 'y' || pilihan == 'Y');
	
	
	return 0;
}
