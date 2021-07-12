#include <iostream>
#include <windows.h>
using namespace std;
 
int main ()
{
    int nilai[6][5];
 
    for (int i=0;i<6;i++)
    {
        for (int j=0;j<5;j++)
        {
            cout<<"Isikan baris "<<i<<" ";
            cout<<"Kolom "<<j<<" : ";
            cin>>nilai[i][j];
        }
    cout<<endl;
    }
    system("cls");
    for (int i=0;i<6;i++)
    {
        for (int j=0;j<5;j++)
        cout<<"Isi baris "<<i<<"Kolom "<<j<<": "<<nilai[i][j]<<endl;
        cout<<endl;
 
    }
    return 0;
}
