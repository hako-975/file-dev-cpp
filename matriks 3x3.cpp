#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int a[3][3], b[3][3], c[3][3], i, j, k;
	
	cout<<"Matriks 3 x 3 : "<<endl;
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<"Input Baris "<<(i+1)<<" , Kolom "<<(j+1)<<" = ";
			cin>>a[i][j];
		}
		cout<<endl;
	}
	
	cout<<"Matriks 3 x 3 = "<<endl<<endl;
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<setw(4)<<a[i][j];
		}
		cout<<endl<<endl;
	}
}

