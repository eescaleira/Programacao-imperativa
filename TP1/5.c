#include<stdio.h>
int main(int argc, char*argv[])
{
	int n;
	printf("Lado do quadrado: ");
	scanf("%i", &n);
	printf("Area do quadrado de lado %i e %i\nPerimetro do quadrado de lado %i e %i\n", n, n*n, n, n*4);
	return 0;
}