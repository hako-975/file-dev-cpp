#include<iostream>
using namespace std;

int main()
{
	for (int i = 0; i <= 2; i++)
	{
		for (int j = 0; j <= 3; j++)
		{
			cout<<i + (++j)<<endl;
		}
	}
}

