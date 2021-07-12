#include<iostream>
using namespace std;

void SeqSearch(int data[], int n, int x, int *idx);

int main()
{
	int data[] = {23, 56, 10, 90, 35, 45, 9, 100, 200, 65};
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
	bool ketemu = false;
	
	while(i < n && !ketemu)
	{
		if(data[i] == x)
		{
			ketemu = true;
		}
		else
		{
			i++;
		}	
	}
	
	if(ketemu)
	{
		*idx = i;
	}
	else
	{
		*idx = -1;
	}
}

