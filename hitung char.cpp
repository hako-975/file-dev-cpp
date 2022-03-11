#include<iostream>

using namespace std;

int HitungCharacter(char *s)
{
	int x = 0;
	for (x; *s != '\0'; s++)
	{
		++x;
	}
	
	return x;
}

int main()
{
	char karakter[80];
	cout<<"Masukkan Kata: ";
	cin.getline(karakter,80);
	cout<<"Jumlah Karakternya Adalah "<<HitungCharacter(karakter)<<" Huruf"<<endl;
}

