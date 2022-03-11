#include <iostream>
#include <string>

using namespace std;

int main()
{
	string password;
	
	cout<<"Program sederhana menggunakan IF ... ELSE"<<endl;
	cout<<"Masukkan Password: ";
	cin>>password;
	
	if(password == "andri123")
	{
		cout<<"Selamat datang, Andri";	
	}
	else
	{
		cout<<"Password yang anda masukkan salah!"<<endl;
	}
	
	
	return 0;
}


