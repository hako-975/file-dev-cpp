#include <iostream>
using namespace std;
 
int main ()
{
	
	string mahasiswa[3] = {"Andri Firman", "Andre Farhan", "Delia Romadhona"};
	
	for (int i = 0; i < 3; i++)
	{
		int j = i + 1;
		cout<<j<<". "<<mahasiswa[i]<<endl;
	}
}

