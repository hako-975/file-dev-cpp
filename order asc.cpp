#include<iostream>
using namespace std;

void BubbleSort(int data[], int n);

int main()
{
	int i, n = 9, data[] = {10, 40, 20, 60, 15, 4, 8, 100, 200, 25};
	
	cout<<"Pengurutan Menaik"<<endl;
	cout<<"--------------------------------"<<endl;
	cout<<"Sebelum diurutkan: "<<endl;

	for(i = 0; i <= n; i++)
	{
		cout<<data[i]<<" ";
	}
	
	cout<<endl;
	
	cout<<"------------------------"<<endl;
	
	BubbleSort(data, n);
	
	cout<<"Setelah diurutkan: "<<endl;

	for(i = 0; i <= n; i++)
	{
		cout<<data[i]<<" ";		
	}
	
	cout<<endl;
	
	return 0;
}

void BubbleSort(int array1[], int n)
{
	int i, j, tmp;
	
	for(i = 1; i <= n; i++)
	{
		for(j = n; j >= i; j--)
		{
			// controller asc and desc
			if(array1[j] < array1[j-1])
			{
				tmp = array1[j];
				
				array1[j] = array1[j-1];
				
				array1[j-1] = tmp;
			}
		}
	}
}

