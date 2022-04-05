#include<iostream>
#include<conio.h>
using namespace std;

int Sum(int *a, int *b);

int main()
{
	int a, b;
	cout<<"Masukkan nilai a: ";
	cin>>a;
	cout<<"Masukkan nilai b: ";
	cin>>b;
	cout<<"\nSUM dari Nilai a dan b: "<<Sum(&a, &b);
	getch();
}

int Sum(int *x, int *y)
{
	int z;
	z = *x + *y;
	return z;
}

