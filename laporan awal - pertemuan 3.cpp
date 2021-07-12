#include <iostream>

using namespace std;

int main()
{
	int nilai;
	string grade;
	
	cout<<"Program sederhana menggunakan IF"<<endl;
	cout<<"Masukkan Nilai: ";
	cin>>nilai;
	
	if(nilai >= 80)
	{
		grade = 'A';
	} 
	else if(nilai >= 70)
	{
		grade = 'B';
	}
	else
	{
		grade = 'C';
	}
	
	cout<<"Grade anda adalah: "<<grade<<endl;
	
	return 0;
}

