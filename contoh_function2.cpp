#include <iostream>
using namespace std;


int menghitungKelilingPersegi(int p, int l)
{
	int hasil;
	hasil = 2 * (p + l);
	return hasil;
}

int jumlahKelilingDuaPersegi(int persegi_1, int persegi_2)
{
	int hasil;
	hasil = persegi_1 + persegi_2;
	return hasil;
}

main()
{
	int p, l, p1, l1;
	// persegi 1
	cout<< "masukkan panjang persegi ke 1 : ";
	cin>>p;
	cout<< "masukkan lebar persegi ke 1 : ";
	cin>>l;
	cout<<"Hasil dari keliling persegi panjang adalah : "<<menghitungKelilingPersegi(p, l)<<endl;
	cout<<"----------------------------------"<<endl;
	// persegi 2
	cout<< "masukkan panjang persegi ke 2 : ";
	cin>>p1;
	cout<< "masukkan lebar persegi ke 2: ";
	cin>>l1;
	cout<<"Hasil dari keliling persegi panjang ke 2 adalah : "<<menghitungKelilingPersegi(p1, l1)<<endl;
	cout<<"----------------------------------"<<endl;
	cout<<"Hasil dari dua keliling persegi panjang adalah : "<<jumlahKelilingDuaPersegi(menghitungKelilingPersegi(p, l), menghitungKelilingPersegi(p1, l1));
}
