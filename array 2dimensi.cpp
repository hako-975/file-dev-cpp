#include <iostream>
using namespace std; 
int main() 
{ 
	int angka[3][4]={{3, 4, 8, 0}, {3, 9, 2, 1}, {6, 3, 0, 2}}; 

	for(int i = 0; i < 3; i++)
	{ 
		for(int j=0; j < 4; j++)
		{ 
			cout<<angka[i][j]<<" "; 
		} 
		
		cout<<endl; 
	} 

	return 0;

}
