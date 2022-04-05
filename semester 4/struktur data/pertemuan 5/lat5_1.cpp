#include<iostream>
#include<conio.h>
using namespace std;

void Tukar(int *a, int *b);

int main()
{
	int a, b;
	cout<<"Masukkan nilai a: ";
	cin>>a;
	cout<<"Masukkan nilai b: ";
	cin>>b;
	cout<<"Nilai a dan b sebelumnya: "<<a<<" & "<<b;
	Tukar(&a, &b);
	cout<<"\nNilai a dan b setelah ditukar: "<<a<<" & "<<b;
	getch();
}

void Tukar(int *x, int *y)
{
	int z;
	z = *x;
	*x = *y;
	*y = z;
}

