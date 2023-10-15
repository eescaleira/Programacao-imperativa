
#include <stdio.h>
int main (int ac, char **av)
{
	int dias, semanas, anos;

	printf("Intruduza o numero de dias: ");
	scanf("%i", &dias);

	anos = dias / 365;
	semanas = (dias%365)/7;
	dias = (dias%365)%7;

	printf("Numero de dias: %i\nNumero de semanas: %i\nNumero de anos: %i\n", dias, semanas, anos);
	return 0;

}