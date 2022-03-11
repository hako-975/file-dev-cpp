#include<iostream>
using namespace std;

int main()
{
	int a = 5, b = 4;
	while((a&b))
	{
		cout<<" --B = "<<--b<<endl;
		cout<<" (B&A) = "<<(b&a)<<endl;
	}
}

