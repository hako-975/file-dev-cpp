#include <iostream>

using namespace std;

int main()
{
	float jari, pi = 3.14, volume, luas;
	
	cout<<"Menghitung Volume dan Luas Permukaan Bola"<<endl;
	
	cout<<"Masukkan nilai jari-jari: ";
	cin>>jari;
	
	// M_PI adalah pi
	// pow(nilai, pangkat)
	volume = (4 * pi * jari * jari * jari) / 3; 
	
	luas = 4 * pi * jari * jari;
	
	cout<<"Hasil volume bola adalah: "<<volume<<endl;
	cout<<"Hasil luas permukaan bola adalah: "<<luas;
	
	return 0;
}

