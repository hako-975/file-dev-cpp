#include<iostream>
using namespace std;

int main()
{
	int t = 0, i, j;
	
	for(i=0; i<=4; i+=2)
	{
		for(j=1; j<=8; j+=3)
		{
			t = t + j;
		}
		cout<<t<<" "<<endl;
	}
}

