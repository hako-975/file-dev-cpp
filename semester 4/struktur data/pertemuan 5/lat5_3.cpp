#include<iostream>
#include<conio.h>
using namespace std;

int Maksimum(int a, int b, int c);
int main()
{
	int a = 8, b = 12, c = -5;
	cout<<"Nilai a = "<<a<<endl;
	cout<<"Nilai b = "<<b<<endl;
	cout<<"Nilai c = "<<c<<endl;
	cout<<"Nilai Terbesar : "<<Maksimum(a, b, c);
	getch();
}

int Maksimum(int x, int y, int z)
{
	int besar = x;
	if (y > besar)
	{
		besar = y;
	}
	if (z > besar)
	{
		besar = z;
	}
	return besar;
}

