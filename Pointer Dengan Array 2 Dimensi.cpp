#include<iostream>
using namespace std;

void  tampilAngka(int *Angka[], int baris, int kolom);

int main()
{
    int angka[2][3] = {{80, 90, 85}, {88, 95, 90}};
    int *pAngka[2];
    *pAngka = angka[0];
    for(int i = 0; i<6; i++)
    {
        (*pAngka)[i] = angka[0][i];
    }
    
    *(pAngka+1) = angka[1];
    
    for(int i = 0; i<6; i++)
    {
        (*(pAngka+1))[i] = angka[1][i];
    }
    
    cout<<"Program Pointer Dengan Array 2 Dimensi"<<endl;
    cout<<"Daftar Nilai"<<endl;
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

