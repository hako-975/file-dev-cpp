#include<iostream>
using namespace std;
main()

{

	int nilaiX=100;

	int &refX=nilaiX;

	cout<<"NilaiX = "<<refX<<endl;

	refX++;

}
