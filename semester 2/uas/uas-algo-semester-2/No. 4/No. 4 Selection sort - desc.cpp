#include<iostream>
using namespace std;

void selectionSort(int data[], int n);

int main()
{
	int i,
	n = 13,
	data[] = {21, 83, 42, 11, 10, 9, 3, 20, 102, 27, 15, 92, 2};
	cout<<"Selection Sort: "<<endl;
	cout<<"--------------------------------"<<endl;
	cout<<"Sebelum diurutkan: "<<endl;
	for(i = 0; i < n; i++)
	{
		cout<<data[i]<<" ";
	}
	cout<<endl;
	cout<<"--------------------------------"<<endl;
	selectionSort(data, n);
	cout<<"Setelah diurutkan: "<<endl;
	
	for(i = 0; i < n; i++)
	{
		cout<<data[i]<<" ";
	}
	
	cout<<endl;
	
	return 0;
}

void selectionSort(int array[], int n) 
{
	int i, j, imin, temp;
	for(i = 0; i < n - 1; i++) 
	{
		imin = i;
		for(j = i+1; j < n; j++)
    	{
    		if(array[j] > array[imin])
    		{
    			imin = j;
			}
		}
		
		temp = array[i];
	    array[i] = array[imin];
	    array[imin] = temp;
   }
}
