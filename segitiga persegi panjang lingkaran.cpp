#include<iostream>
using namespace std;
int main()
{
	const float pi = 3.14;
	
	float panjang, lebar, alas, sisi[3],
		tinggi, jari_jari, luas, keliling;
	
	char pilihan, lagi;

	do 
	{
		system("cls");
		cout<<"Pilih rumus yang ingin dihitung"<<endl;
		cout<<"S. Segitiga"<<endl;
		cout<<"P. Persegi Panjang"<<endl;
		cout<<"L. Lingkaran"<<endl;
		cout<<"---------------------"<<endl;
		cout<<"Masukkan pilihan: ";
		cin>>pilihan;
		switch(pilihan)
		{
			case 's':
			case 'S':
				cout<<"Masukkan alas\t\t: ";
				cin>>alas;
				cout<<"Masukkan tinggi\t\t: ";
				cin>>tinggi;
				keliling = 0;
				for	(int i = 0; i < 3; i++)
				{
					cout<<"Masukkan sisi "<<i+1<<"\t\t: ";
					cin>>sisi[i];
					keliling += sisi[i];
				}
				
				luas = (alas * tinggi) / 2;
				
				cout<<"Keliling segitiga\t: "<<keliling;
				cout<<endl;
				cout<<"Luas segitiga\t\t: "<<luas;
				break;	
			case 'p':
			case 'P':
				cout<<"Masukkan panjang\t: ";
				cin>>panjang;
				cout<<"Masukkan lebar\t\t: ";
				cin>>lebar;
				keliling = 2 * (panjang + lebar);
				luas = panjang * lebar;
				cout<<"Keliling persegi panjang: "<<keliling;
				cout<<endl;
				cout<<"Luas persegi panjang\t: "<<luas;
				break;
			case 'l':
			case 'L':
				cout<<"Masukkan jari-jari\t: ";
				cin>>jari_jari;
				keliling = 2 * pi * jari_jari;
				luas = pi * jari_jari * jari_jari;
				cout<<"Keliling lingkaran\t: "<<keliling;
				cout<<endl;
				cout<<"Luas lingkaran\t\t: "<<luas;
				break;
			default:
				cout<<"Pilihan yang Anda masukkan salah!"<<endl;
				break;
		}
		cout<<endl;
		cout<<"Apakah Anda ingin menghitung lagi? Y/t"<<endl;
		cin>>lagi;
	}
	while(lagi == 'y' || lagi == 'Y');
}
