#include<iostream>
using namespace std;

void BubbleSort(int data[], int n);

int main()
{
	int i,
	n = 9,
	data[] = {4, 2, 5, 1, 8, 7, 10, 9, 6};
	cout<<"Bubble Sort: "<<endl;
	cout<<"--------------------------------"<<endl;
	cout<<"Sebelum diurutkan: "<<endl;
	for(i = 0; i < n; i++)
	{
		cout<<data[i]<<" ";
	}
	cout<<endl;
	cout<<"--------------------------------"<<endl;
	BubbleSort(data, n);
	cout<<"Setelah diurutkan: "<<endl;
	
	for(i = 1; i <= n; i++)
	{
		cout<<data[i]<<" ";
	}
	
	cout<<endl;
	
	return 0;
}

void BubbleSort(int array1[], int n)
{
	int i, j, tmp;
	for(i = 0; i < n; i++)
	{
		for(j = n; j > i; j--)
		{
			if(array1[j] < array1[j-1])
			{
				tmp = array1[j];
				array1[j] = array1[j-1];
				array1[j-1] = tmp;
			}
		}
	}
}

