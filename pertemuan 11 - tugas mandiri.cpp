#include<iostream>
using namespace std;

int main()
{
	int pinjaman = 10000000;
	int total;
	int result;
	int bulan_ke = 2;
	int cicilan2;
	
	float cicilan = 0.10; // 10%
	float bunga = 0.015; // 1.5%
	
	// pinjaman
	total 	 = (pinjaman * bunga) + pinjaman;
	cicilan2 = total * cicilan;
	result 	 = total - cicilan2; 
	
	cout<<"Pinjaman bulan ke-1 beserta bunganya: ";
	cout<<total<<" - "<<cicilan2<<" = "<<result<<endl;
	
	for	(int i=0; i <= 100; i++)
	{
		if(total > 1000000)
		{
			total 	= result;
			cicilan2 = total * cicilan;
			result 	= total - cicilan2; 
			cout<<"Pinjaman bulan ke-"<<bulan_ke<<" beserta bunganya: ";
			cout<<total<<" - "<<cicilan2<<" = "<<result<<endl;
			
			// increment bulan
			bulan_ke++;
		}
	}
}
