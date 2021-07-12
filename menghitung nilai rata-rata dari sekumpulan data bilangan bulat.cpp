#include<iostream>

using namespace std;

void fungsiMinMax(int jml_data, int n[])
{
	int min = n[0], max;
	
	for(int i = 1; i <= jml_data; i++)
	{
		if (n[i] > max)
    	{
          max = n[i];
        }
		
		if (n[i] < min)
        {
          min = n[i];
        }
    }
    
    cout<<"Min : "<<min<<endl;
    cout<<"Max : "<<max<<endl;
}

float fungsiSum(int jml_data, int n[])
{
	float sum;
	
	for(int i = 1; i <= jml_data; i++)
	{
		sum += n[i];
	}
	
	return sum;
}

float fungsiAvg(int jml_data, float sum)
{
	return sum / jml_data;
}

int main()
{
	int jml_data, n[100];
	float sum, avg;
	
	cout<<"Masukkan jumlah data: ";
	cin>>jml_data;
	
	cout<<"----------------------"<<endl;
	
	for(int i = 1; i <= jml_data; i++)
	{
		cout<<"Masukkan angka ke "<<i<<" : ";
		cin>>n[i];
	}
	
	fungsiMinMax(jml_data, n);
    
	sum = fungsiSum(jml_data, n);
    
	avg = fungsiAvg(jml_data, sum);
	
	cout<<"Sum : "<<sum<<endl;
	cout<<"Rata-rata : "<<avg<<endl;
	
	return 0;
}

