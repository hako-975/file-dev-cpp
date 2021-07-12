#include<iostream>
using namespace std;

int main()
{
	int batas;
	int i = 1;
	
	cout<<"Deret Bilangan Ganjil"<<endl;	
	
	cout<<"Masukkan batas: ";
	cin>>batas;
	
	while(i <= batas)
	{
		if (i % 2 != 0)
		{
			cout<<i<<" ";
		}
		
		i++;
	}
}

