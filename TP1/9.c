#include<stdio.h>
int main(int argc, char*argv[])
{
	double a;
	int i;
	char g;

	printf("Introduza a altura (em metros): ");
	scanf("%lf", &a);
	printf("Introduza a idade: ");
	scanf("%i", &i);
	printf("Introduza o genero:");
	scanf(" %c", &g);
	printf("Valores introduzidos:\n  altura: %.2lf\n  idade:  %i\n  genero: %c\n", a, i, g);
	return 0;
}