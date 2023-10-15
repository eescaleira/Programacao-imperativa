#include<stdio.h>
int main(int argc, char*argv[])
{
	int dividendo;
	int divisor;
	printf("Inserir dividendo: ");
	scanf("%i", &dividendo);
	printf("Inserir divisor: ");
	scanf("%i", &divisor);
	int resto = dividendo % divisor;
	int quoc = dividendo / divisor;
	printf("Divisao %i/%i = %i\nresto %i/%i = %i\n", dividendo, divisor, quoc, dividendo, divisor, resto);
	return 0;
}