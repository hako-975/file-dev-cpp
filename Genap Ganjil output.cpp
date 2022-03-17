#include<iostream>
using namespace std;

int main()
{
	cout<<"Ganjil: ";
	
	for(int i = 1; i <= 35; i++)
	{
		if(i % 2 == 1)
		{
			cout<<i<<" ";
		}
	}
	cout<<endl;
	
	cout<<"Genap: ";
	for(int j = 1; j <= 35; j++)
	{
		if(j % 2 == 0)
		{
			cout<<j<<" ";
		}
	}
	cout<<endl;
}
