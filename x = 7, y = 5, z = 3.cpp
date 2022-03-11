#include<iostream>
using namespace std;

int a(int y)
{
	int z = y;
	return z;
}

int b(int z, int x)
{
	//	z = z + x;
	z += x;
	return z;
}

int c(int z, int x, int y)
{
	z = z - (x * y);
	return z;
}

int d(int x, int y)
{
	int z = x % y;
	return z;
}

int main()
{
	int x = 7, y = 5, z = 3;
	cout<<"Mendeklarasi variable : "<<endl<<"X = 7"<<endl<<"Y = 5"<<endl<<"Z = 3"<<endl;
	cout<<"---------------------------"<<endl;
	cout<<"Z = Y adalah "<<a(y)<<endl;
	cout<<"Z = Z + X adalah "<<b(z, x)<<endl;
	cout<<"Z = Z - X * Y adalah "<<c(z, x, y)<<endl;
	cout<<"Z = X % Y adalah "<<d(x, y)<<endl;
}

