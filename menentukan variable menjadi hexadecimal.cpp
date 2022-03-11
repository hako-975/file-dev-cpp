#include<iostream>
#include<iomanip>
using namespace std;

main()
{
	// menentukan variable menjadi hex (heksadesimal)
	cout<<hex;
	// menentukan tanda format dengan contoh parameter ios::showbase | ios::uppercase
	cout<<setiosflags(ios::showbase | ios::uppercase);
	// mengisi nilai hex
	cout<<200<<endl;	
}

