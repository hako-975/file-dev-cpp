#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char nama[25] = {"Andri Firman Saputra"};
	char destinasi[25];
	
	strcpy(destinasi, nama);
	cout<<"Nama\t\t: "<<nama<<endl;
	cout<<"Destinasi\t: "<<destinasi;
	
	return 0;
}

