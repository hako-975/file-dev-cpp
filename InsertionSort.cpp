#include<iostream>
using namespace std;

void InsertionSort(int data[], int n);

int main()
{
	int i, 
		jmlData = 10, 
		n = jmlData - 1,
		data[] = {27, 25, 12, 32, 60, 52, 35, 37, 47, 17, 45, 10, 5, 15};
		
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
			if (x > array1[j])
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

