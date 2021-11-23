#include<iostream>
#include<string>
using namespace std;

int main()
{
	cout<<"Masukkan Nama: ";
	string nama;
	//cin.ignore();
	getline(cin,nama, '\n');
	cout<<nama;
}
