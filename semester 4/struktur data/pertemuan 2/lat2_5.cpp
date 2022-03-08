#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int nilai[6][4] = {
		{1,3,4,5},
		{2,4,6,8},
		{3,5,7,9},
		{9,2,5,4},
		{7,4,7,3},
		{6,9,4,2}
	};
	int i = 0, j = 0;
	
	for (i = 0; i < 6; i++)
	{
		for (j = 0; j < 4; j++)
		{
			cout<<nilai[i][j]<<" ";
		}
		cout<<endl;
	}	
	
	getch();
}

