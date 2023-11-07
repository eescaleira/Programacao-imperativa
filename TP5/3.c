#include<stdio.h>
int main()
{
	int n, i = 0, m = 0, p = 0, moda = 0;
	float media = 0;

	printf("Quantos alunos? ");
	scanf("%i", &n);
	
	int notas[n], hist[21];
	for(i = 0; i < 21; i++)
		hist[i] = 0;
	
	printf("Introduza as notas:\n");
	for(i = 0;i < n;)
	{
		scanf("%i", &notas[i]);
		if(notas[i] < 0 || notas[i] > 20)
			printf("Nota invalida\n");
		else
		{
			hist[notas[i]]++;
			i++;
		}
	}

	printf("Notas introduzidas:\n");
	for(i = 0; i < n; i++)
		printf("%i: %i\n", i, notas[i]);
	printf("\nHistorico de notas:\n");
	for(i = 0; i < 21; i++)
		printf("%i: %i\n", i, hist[i]);
	
	/*  */

	for(i = 0;i < 21;i++)
		if(hist[i])
		{
			p = i;
			break;
		}	
	for(i = 0; m == 0 && i < 20;i++)
		if(m == 0 && hist[20 - i] != 0)
			m = 20 - i;

	printf("\nMelhor nota: %i\nPior nota: %i\n", m, p);

	/*  */

	for(i = 0; i < 21; i++)
		media += hist[i] * i;
	media /= n;

	printf("Media: %.2f\n", media);

	/*  */

	for(i = 0, m = 0; i < 21; i++)
		if(hist[i] > m)
			m = hist[i], moda = i;
	
	printf("Moda: %i\n", moda);
	return 0;
}