#include<iostream>
using namespace std;

int linearSearch(int data[], int dataSize, int element);

int main()
{
	int dataSize = 5;
	int data[dataSize];
	int searchingElement = 0;
	int flag = 0;
	cout<<"Masukkan 5 buah data berikut: "<<endl;
	for(int i = 0; i < dataSize; i++)
	{
		cout<<"Masukkan data ke "<<i+1<<": ";
		cin>>data[i];
	}
		
	cout<<"Isi dari array adalah: "<<endl;
	cout<<"Array: "<<"\t\t\t"<<"data: "<<endl;
	for(int count = 0; count < dataSize; count++)
	{
		cout<<"array["<<count<<"]"<<"\t\t";
		cout<<data[count]<<endl;
	}
	
	cout<<"\n\nMasukkan data yang dicari: ";
	cin>>searchingElement;
	
	flag = linearSearch(data, dataSize, searchingElement);
	
	if(flag != -1)
	{
		cout<<"\n\nData tersebut ditemukan pada posisi: array["<<flag<<"]";
	}
	else
	{
		cout<<"\n\nData tersebut tidak ditemukan"<<endl;
	}
	
	return 0;
}

int linearSearch(int data[], int dataSize, int element)
{
	int flag = -1;
	for(int count = 0; count < dataSize; count++)
	{
		if(element == data[count])
		{
			flag = count;
			break;
		}
	}
	return flag;
}

