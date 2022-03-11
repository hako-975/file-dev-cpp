#include<iostream>
using namespace std;

int main()
{
	int a = 5, b = 4;
	
	do
	{
		cout<<" B-- = "<<b--<<endl;
		cout<<" (B|A) = "<<(b|a)<<endl;
	} while((a|b) >= 0);

}
