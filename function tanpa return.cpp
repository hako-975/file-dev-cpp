#include<iostream>
#include<string>
using namespace std;

void tampilkanDataSiswa(string dataSiswa[])
{
	int length;
	length = sizeof(dataSiswa) / sizeof(dataSiswa);
	
	for(int i = 0; i <= length; i++)
	{
		cout<<"Nama Siswa: "<<dataSiswa[i]<<endl;
	}
}

int main()
{
	string dataSiswa[2] = {"Andri", "Andre"};
	
	tampilkanDataSiswa(dataSiswa);
	
	return 0;
}

