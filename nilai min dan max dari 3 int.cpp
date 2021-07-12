#include<iostream>

using namespace std;

int main()
{
	int jml_data = 3, n[100], min = n[0], max;
	
	for(int i = 1; i <= jml_data; i++)
	{
		cout<<"Masukkan angka ke "<<i<<" : ";
		cin>>n[i];
	}
	
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
    
    return 0;
}

