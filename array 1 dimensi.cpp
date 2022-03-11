#include<iostream>
#include<string>
using namespace std;

int main()
{
	string namaMahasiswa[3] = {"Andri", "Andre", "Irgi"};
	int arrayLength = sizeof(namaMahasiswa) / sizeof(namaMahasiswa[0]);
	
	for(int i = 0; i < arrayLength; i++)
	{
		cout<<"Nama Mahasiswa: "<<namaMahasiswa[i]<<endl;
	}
	
	return 0;
}

