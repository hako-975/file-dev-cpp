#include <stdio.h>
#define PHI 3.14159265358979323846
int main()
{
	float jari, luas, volume;
	
	printf("Menghitung luas permukaan dan volume bola \n");
	printf("Masukkan Nilai jari-jari: ");
	scanf("%f", &jari);
	
	luas = 4 * PHI * jari * jari;
	volume = (4 * PHI * jari * jari * jari) / 3;
	printf("Luas permukaan bola: %f", luas);
	printf("\n");
	printf("Volume bola: %f", volume);
	return 0;
}

