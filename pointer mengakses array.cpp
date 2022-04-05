#include <iostream>
using namespace std;
 
int main () 
{
	int a = 0;
	int i; 
	int sum = 0, max = 0, min = 0;
	int *ptr; 

	cout << "Banyaknya element yang akan di input: ";
	cin >> a;
	
	// array dengan length input user
	int data[a];
	
	ptr = data;
	max = min = *ptr;
	 
	for(i = 0; i < a; i++) 
	{
		cout << "Input element ke-"<<i+1<< ": ";
		cin >> data[i];
	}

	for(i = 0; i < a; i++) 
	{
		sum = sum + *(ptr + i);
		if (max < *(ptr + i)) 
		{
			max = *(ptr + i);
		}

		if (min > *(ptr + i)) 
		{
			min = *(ptr + i);
		}
	}

	cout << "\n Jumlah data : " << sum;
	cout << "\n Rata-rata : " << sum/a;
	cout << "\n terkecil : " << min;
	cout << "\n terbesar : " << max;

	return 0;
}
