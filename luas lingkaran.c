#include <stdio.h>
#define PHI 3.14159265358979323846
int main()
{
	float jari, luas;
	
	printf("Menghitung luas lingkaran \n");
	printf("Masukkan Nilai jari-jari lingkaran: ");
	scanf("%f", &jari);
	
	luas = PHI * jari * jari;
	
	printf("Luas lingkaran: %f", luas);
	return 0;
}

