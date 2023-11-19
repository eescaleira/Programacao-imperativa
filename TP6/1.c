
#include <stdio.h>
#include <math.h>

double raiz_quadrada(double); // declaração da função

int main(void)
{
	double numero;
	printf("Introduza um numero: ");
	scanf("%lf", &numero);
	double resultado = raiz_quadrada( numero );
	printf("A raiz quadrada de %f e %f\n", numero , resultado );
	return 0;
}

double raiz_quadrada(double n) 
{ // definição da função
	double r = sqrt(n);
	return(r);
}
