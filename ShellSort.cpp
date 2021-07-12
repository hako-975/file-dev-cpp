#include<iostream>
using namespace std;

void InsertionSort(int data[], int n, int start, int step);
void ShellSort(int data[], int n);

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
	
	ShellSort(data, n);
	
	cout<<"Setelah diurutkan: "<<endl;
	for (i = 0; i <= n; i++)
	{
		cout<<data[i]<<" ";
	}
	cout<<endl;
}

void InsertionSort(int data[], int n, int start, int step)
{	
	int i, j, x;
	bool ketemu;
	i = start + step;
	
	while (i <= n)
	{
		x = data[i];
		j = i - step;
		
		ketemu = false;
		
		while ((j >= 0) && (!ketemu))
		{
			if(x > data[j])
			{
				data[j+step] = data[j];
				j = j - step;
			}
			else
			{
				ketemu = true;	
			}
		}
		
		data[j+step] = x;
		i += step;	
	}
}

void ShellSort(int data[], int n)
{
	int start, step;
	for (step = 5; step >= 1; step -= 2)
	{
		for(start = 0; start <= step; start++)
		{
			InsertionSort(data, n, start, step);
		}
	}
}

