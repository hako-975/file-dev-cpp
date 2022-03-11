#include<iostream>
#include<string>
using namespace std;

int main()
{
	int i = 0;
	char str[] = "tes";
	char c;
	while(str[i])
	{
		c = str[i];
		putchar(toupper(c));
		i++;
	}
	return 0;
}
