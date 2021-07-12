#include <iostream>
#define PHI 3.14159265358979323846
using namespace std;
int main()
{
	float jari, luas;
	
	cout<<"Menghitung luas lingkaran"<<endl;
	cout<<"Masukkan Nilai jari-jari lingkaran: ";
	cin>>jari;
	
	luas = PHI * jari * jari;
	
	cout<<"Luas lingkaran adalah: "<<luas;
}

