#include<stdio.h>

main()
{
	int square[10];
	int i, k;
	
	for(i = 0; i < 10; i++)
	{
		k = i + 1;
		square[i] = k * k;
		printf("\n Pangkat dari %d adalah %d", k, square[i]);
	}
	return 0;
}

