#include<iostream>
using namespace std;

void SeqSearch(int data[], int n, int x, int *idx);

int main()
{
	int data[] = {23, 56, 10, 90, 35, 45, 9, 100, 200, 65};
	int idx, x, i, jmlData = 10;
	
	cout<<"Elemen array: ";
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
		cout<<"Data yang dicari ditemukan!"<<endl;
		cout<<"Indeks ke: "<<idx;
	}
	else
	{
		cout<<"Data yang dicari tidak ada dalam array!"<<endl;
		cout<<"Indeks ke: "<<idx;
	}
	
	return 0;

}

void SeqSearch(int data[], int n, int x, int *idx)
{
	int i = 0;
	while(i < n-1 && data[i] != x)
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

