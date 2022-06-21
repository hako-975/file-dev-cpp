#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int nim[12];
	int nimLength = sizeof(nim) / sizeof(nim[0]);
	int i, j, k;
	int temp;
	
	bool tukar;
	
	
	for (i = 0; i < nimLength; i++)
	{
		cout<<"Masukkan NIM urutan ke-"<<i+1<<": ";
		cin>>nim[i];
	}
	
		i = 0;
	tukar = true;
	while ((i <= nimLength-2) && (tukar))
	{
		tukar = false;
		for (j = nimLength-1; j>= i+1; j--)
		{
			if (nim[j] < nim[j-1])
			{
				temp = nim[j];
				nim[j] = nim[j-1];
				nim[j-1] = temp;
				tukar = true;
				cout<<"\nUntuk j = "<<j<<"\t: ";
				for (k = 0; k < nimLength; k++)
				{
					cout<<setw(3)<<nim[k];
				}
			}
		}
		
		i++;
	}
	
	cout<<endl;
	cout<<"Setelah diurutkan: ";

	for(i = 0; i < nimLength; i++)
	{
		cout<<nim[i];		
	}
}

