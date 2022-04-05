#include<iostream>
using namespace std;

int main()
{
	int nilai[3] = {90, 80, 85};
	int *ptrNilai;
	int i = 0;
	ptrNilai = nilai;
	
	while (i < 3)
	{
		cout<<"Nilai : "<<*(nilai+i)<<endl;
		i++;
	}
}

