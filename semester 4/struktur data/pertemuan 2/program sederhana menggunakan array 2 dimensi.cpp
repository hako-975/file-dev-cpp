#include <iostream>
using namespace std;
 
int main ()
{
    int nilai[2][3];
 
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<"Isikan baris "<<i<<" ";
            cout<<"Kolom "<<j<<" : ";
            cin>>nilai[i][j];
        }
    	cout<<endl;
    }
    
	system("cls");
    
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
        	cout<<"Isi baris "<<i<<" Kolom "<<j<<": "<<nilai[i][j]<<endl;
		}
        cout<<endl;
 
    }
}

