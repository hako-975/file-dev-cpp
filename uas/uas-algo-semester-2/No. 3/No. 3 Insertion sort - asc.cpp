#include<iostream>
using namespace std;

void InsertionSort(int data[], int n);

int main()
{
	int i, 
		jmlData = 8, 
		n = jmlData - 1,
		data[] = {5, 34, 32, 25, 75, 42, 22, 2};
	
	cout<<"Insertion Sort: "<<endl;
	cout<<"--------------------------------"<<endl;
	cout<<"Sebelum diurutkan: "<<endl;
	for (i = 0; i <= n; i++)
	{
		cout<<data[i]<<" ";
	}
	cout<<endl;
	
	cout<<"----------------------------------"<<endl;
	
	InsertionSort(data, n);
	
	cout<<"Setelah diurutkan: "<<endl;
	for (i = 0; i <= n; i++)
	{
		cout<<data[i]<<" ";
	}
	cout<<endl;
}

void InsertionSort(int array1[], int n)
{	
	int i, j, x;
	bool ketemu;
	
	for(i = 1; i <= n; i++)
	{
		x = array1[i];
		j = i - 1;
		ketemu = false;
		
		while ((j >= 0) && (!ketemu))
		{
			if (x < array1[j])
			{
				array1[j+1] = array1[j];
				j = j - 1;
			}
			else
			{
				ketemu = true;	
			}		
		}
		
		array1[j+1] = x;
	}
}

