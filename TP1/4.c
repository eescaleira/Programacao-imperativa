#include <stdio.h>
int main(int argc, char*argv[])
{
	double pi = 3.14159;
	int raio = 3;
	double area = pi * (raio^2);
	double perimetro = 2*pi*raio;
	printf("raio: %.3f\nperimetro: %.3f\n", area, perimetro);
	return 0;
}