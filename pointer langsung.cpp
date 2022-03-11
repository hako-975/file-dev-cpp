#include<iostream>
using namespace std;

int main()
{
	int y = 5;
	int *yptr;
	yptr = &y;
	
	
	cout<<"yptr: "<<yptr<<endl;
	cout<<"yptr: "<<*yptr<<endl;
}
