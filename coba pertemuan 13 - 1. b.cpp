#include<iostream>
using namespace std;

int main()
{
	int a[100][100], i, j;
	for(i = 0; i <= 2; i++)
	{
		for(j = 0; j <= 4; j += 2)
		{
			a[i][j] = j;
			cout<<a[i][j];
		}
		cout<<endl;
	}
	
}
