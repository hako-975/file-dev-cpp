#include<stdio.h>
#include <math.h>

int main()
{
	int a, b, c;
	float x1, x2;
	
	printf("Menghitung nilai-nilai x dari sebuah persamaan ax2 + bx + c = 0 \n");
	printf("Masukkan nilai a: ");
	scanf("%d", &a);
	printf("Masukkan nilai b: ");
	scanf("%d", &b);
	printf("Masukkan nilai c: ");
	scanf("%d", &c);
	
	x1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
	x2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
	
	printf("Nilai x1: %f \n", x1);
	printf("Nilai x2: %f \n", x2);
	return 0;
}

