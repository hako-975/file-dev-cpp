#include<iostream>
using namespace std;

int main()
{
	int *pTgl, 
		*pTgl2, 
		tglLahir[]{24,6,65};
		pTgl = tglLahir;
		pTgl2 = &tglLahir[1];
	
	for(int i=1; i<=3; i++)
	{
		cout<<*pTgl<<endl;
		pTgl++;
	}
	cout<<*pTgl2<<endl;
	cout<<*(pTgl2+1)<<endl;
}
