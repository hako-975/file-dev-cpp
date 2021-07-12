#include<iostream>
using namespace std;

void SeqSearch(int data[], int n, int x, int *idx);

int main()
{
	int data[] = {90, 80, 78, 69, 65, 55, 50, 30, 26, 23};
	int idx, x, i, jmlData = 10;
	
	cout<<"Elemen Array: ";
	for(i = 0; i < jmlData; i++)
	{
		cout<<data[i]<<" ";
	}
	cout<<endl;
	
	cout<<"Masukkan data yang akan dicari: ";
	cin>>x;
	
	SeqSearch(data, jmlData, x, &idx);
	if(idx != -1)
	{
		cout<<"Data yang dicari berada pada indeks: "<<idx<<endl;
	}
	else
	{
		cout<<"Data yang dicari tidak ada dalam array"<<endl;
	}
	
}

void SeqSearch(int data[], int n, int x, int *idx)
{
	int i = 0;
	while(i < n - 1 && data[i] > x)
	{
		i++;
	}
	
	if(data[i] == x)
	{
		*idx = i;
	}
	else
	{
		*idx = -1;
	}
}

