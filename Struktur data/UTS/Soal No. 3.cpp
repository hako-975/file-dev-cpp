#include<iostream>
using namespace std;

void  tampilAngka(int *Angka[], int baris, int kolom);

int main()
{
    int angka[2][3] = {{87, 90, 95}, {90, 92, 88}};
    int *pAngka[2];
    *pAngka = angka[0];
    
    for(int i = 0; i < 6; i++)
    {
        (*pAngka)[i] = angka[0][i];
    }
    
    *(pAngka+1) = angka[1];
    
    for(int i = 0; i<6; i++)
    {
        (*(pAngka+1))[i] = angka[1][i];
    }
    
    cout<<"Daftar Nilai UTS:"<<endl;
    tampilAngka(pAngka, 2, 3);
    
    return 0;
}

void  tampilAngka(int *angka[], int baris, int kolom)
{
    for(int i = 0; i < baris; i++)
    {
        for(int j = 0; j < kolom; j++)
        {
            cout<<"Indeks ke - ["<<i<<"]["<<j<<"]:"<<(*(angka+i))[j]<<endl;
        }
    }   
}

