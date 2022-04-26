#include<iostream>

using namespace std;

int main()
{
	int nilai;
	cout<<"Masukkan nilai: ";
	cin>>nilai;
	
	// jika nilai lebih besar sama dengan 80, lulus selain itu tidak lulus
	(nilai >= 80) ? cout<<"Lulus" : cout<<"Tidak Lulus";
}

