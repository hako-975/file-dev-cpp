#include<iostream>
using namespace std;

int main()
{
	string nama_mahasiswa[3] = {"Andri", "Firman", "Saputra"};
	for(int i = 0; i <= sizeof(nama_mahasiswa); i++)
	{
		cout<<nama_mahasiswa[i]<<" ";
	}
	return 0;
}
