#include<iostream>
using namespace std;

void BinSearch(int data[], int n, int x, int *idx);

int main()
{
	int data[] = {1, 16, 25, 30, 45, 55, 68, 75, 82, 93};
	int idx, x, i, jmlData = 10;
	
	cout<<"Elemen Array: ";
	for(i = 0; i < jmlData; i++)
	{
		cout<<data[i]<<" ";
	}
	cout<<endl;
	
	cout<<"Masukkan data yang akan dicari: ";
	cin>>x;
	
	BinSearch(data, jmlData, x, &idx);
	if(idx != -1)
	{
		cout<<"Data yang dicari berada pada indeks: "<<idx<<endl;
	}
	else
	{
		cout<<"Data yang dicari tidak ada dalam array"<<endl;
	}
	
}

void BinSearch(int data[], int n, int x, int *idx)
{
	bool ketemu = false;
	int top = n-1, bottom = 0, mid;
	int i = 0;
	while(bottom <= top && !ketemu)
	{
		mid = (top + bottom) / 2;
		
		if(data[mid] == x)
		{
			ketemu = true;
		}
		else
		{
			if(data[mid] > x)
			{
				top = mid - 1;
			}
			else
			{
				bottom = mid + 1;
			}
		}
	}
		
	if(ketemu)
	{
		*idx = mid;
	}
	else
	{
		*idx = -1;
	}
}

