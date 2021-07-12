#include <iostream>
#define PHI 3.14159265358979323846
using namespace std;
int main()
{
	double jari, tinggi, volume;
	
	cout<<"Menghitung volume tabung"<<endl;
	cout<<"Masukkan Nilai jari-jari tabung: ";
	cin>>jari;
	cout<<"Masukkan Nilai tinggi tabung: ";
	cin>>tinggi;
	
	volume = PHI * jari * jari * tinggi;
	
	cout<<"Volume tabung adalah: "<<volume;
}

