
#include <stdio.h>

int main (int ac, char **av)
{
	float c;
	float k;
	float fa;

	printf("Inserir temperatura em Celsious: ");
	scanf("%f", &c);
	printf("\n");
	printf("Celsious: %f\n", c);

	k = (c + 273.15);
	printf("Kelvin: %f\n", k);

	fa = (c * 1.80) + 32;
	printf("Farhrenheit: %f\n", fa);
	return 0;
}