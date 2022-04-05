#include<iostream>
#include<conio.h>
using namespace std;

void Tukar(int &a, int &b);

int main()
{
	int a = 8, b = -5;
	
	cout<<"Nilai a dan b sebelum ditukar: "<<a<<" & "<<b;
	Tukar(a, b);
	cout<<"\nNilai a dan b setelah ditukar: "<<a<<" & "<<b;
	getch();
}

void Tukar(int &x, int &y)
{
	int z;
	z = x;
	x = y;
	y = z;
}

