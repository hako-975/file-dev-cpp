#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double degree, result;
	cout<<"Masukan sinus : ";
	cin>>degree;
	result = sin(degree) * 180 / 22/7;
	cout<<"hasil sinus adalah : "<<result<<endl;
	return 0;
}
