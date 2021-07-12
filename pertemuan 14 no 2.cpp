#include<iostream>

using namespace std;

int main()
{
	int a;
	int array_a[100];
	int array_a_ke = 0;
	int samadengansatu_a = 0;

	int b;
	int array_b[100];
	int array_b_ke = 0;
	int samadengansatu_b = 0;
	
	cout<<"Masukkan bilangan a : ";
	cin>>a;
		
	cout<<"Masukkan bilangan b : ";
	cin>>b;
	
    //	perhitungan bil a
	while(samadengansatu_a == 0)
	{
		if(a != 1)
		{
			if(a % 2 == 0)
			{
				array_a[array_a_ke] = 2;
				a /= 2;
			}
			else if(a % 3 == 0)
			{
				array_a[array_a_ke] = 3;
				a /= 3;
			}
			else if(a % 5 == 0)
			{
				array_a[array_a_ke] = 5;
				a /= 5;
			}
			else if(a % 7 == 0)
			{
				array_a[array_a_ke] = 7;
				a /= 7;
			}
			else
			{
				array_a[array_a_ke] = a;
				samadengansatu_a = 1;
			}
			
			array_a_ke++;
		}
		else
		{
			samadengansatu_a = 1;
		}
	}
	
	for(int i_a = 0; i_a < array_a_ke; i_a++)
	{
		cout<<array_a[i_a]<<" x ";
	}
	
	cout<<endl;
	
	//	perhitungan bil b
	while(samadengansatu_b == 0)
	{
		if(b != 1)
		{
			if(b % 2 == 0)
			{
				array_b[array_b_ke] = 2;
				b /= 2;
			}
			else if(b % 3 == 0)
			{
				array_b[array_b_ke] = 3;
				b /= 3;
			}
			else if(b % 5 == 0)
			{
				array_b[array_b_ke] = 5;
				b /= 5;
			}
			else if(b % 7 == 0)
			{
				array_b[array_b_ke] = 7;
				b /= 7;
			}
			else
			{
				array_b[array_b_ke] = b;
				samadengansatu_b = 1;
			}
			
			array_b_ke++;
		}
		else
		{
			samadengansatu_b = 1;
		}
	}
	
	for(int i_b = 0; i_b < array_b_ke; i_b++)
	{
		cout<<array_b[i_b]<<" x ";
	}
}

