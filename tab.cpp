#include<iostream>
using namespace std;

int main()
{
	int a, b, t;
	a = 5;
	b = 2;
	
	t = a;
	a = b;
	b = t;
	
	cout<<"T : "<<t<<endl;
	cout<<"A : "<<a<<endl;
	cout<<"B : "<<b<<endl;
}
