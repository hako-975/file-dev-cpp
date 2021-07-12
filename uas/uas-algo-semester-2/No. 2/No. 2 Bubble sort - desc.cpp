#include<iostream>
using namespace std;

void BubbleSort(int data[], int n);

int main()
{
	int i,
	n = 10,
	data[] = {1, 10, 3, 8, 5, 6, 7, 4, 9, 2};
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
	
	for(i = 0; i < n; i++)
	{
		cout<<data[i]<<" ";
	}
	
	cout<<endl;
	
	return 0;
}

void BubbleSort(int array1[], int n)
{
	int i, j, tmp;
	for(i = 1; i < n; i++)
	{
		for(j = n - 1; j >= i; j--)
		{
			if(array1[j] > array1[j-1])
			{
				tmp = array1[j];
				array1[j] = array1[j-1];
				array1[j-1] = tmp;
			}
		}
	}
}

