#include<iostream>
using namespace std;

int main()
{
	int nilai[2][3] = {{90, 85, 95}, {80, 88, 90}};
	int *pNilai[2];
	
	*pNilai = nilai[0];
	
	for (int i = 0; i < 6; i++)
	{
		(*pNilai)[i] = nilai[0][i];
	}
	
	*(pNilai+1) = nilai[1];
	
	for (int j = 0; j < 6; j++)
	{
		((*pNilai+1))[j] = nilai[1][j];
	}
	
	cout<<"Daftar Nilai:"<<endl;
	for(int k = 0; k < 2; k++)
    {
        for(int l = 0; l < 3; l++)
        {
            cout<<"Indeks ke - ["<<k<<"]["<<l<<"]:"<<(*pNilai+k)[l]<<endl;
        }
    }
}

