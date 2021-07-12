#include<stdio.h>

int main()
{
	int A = 5, B = 2, T;
	T = A;
	A = B;
	B = T;

	printf("%d", B);
	
	return 0;
}

