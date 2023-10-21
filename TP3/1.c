#include <stdio.h>
int main()
{
	int i1, i2;
	int b;
	scanf("%i", &i1);
	scanf("%i", &i2);
	b = i1;
	if( i1 < i2)
		b = i2; 
	printf("%i\n", b);
	if(b % 2 == 0)
		printf("Maior numero e par\n");
	else
		printf("Maior numero e impar\n");
	if((i1 + i2) % 2 == 0)
		printf("Soma dos numeros e par\n");
	else
	{
		printf("Soma dos numero e impar\n");
		if((i1 + i2) % 3 == 0)
			printf("Soma e multiplo de 3\n");
		else if((i1 + i2) % 4 == 0) // se e impar nao e multiplo de 4
			printf("Soma e multiplo de 4\n");
	}
}