void dividir_segundos (long totalSeg, int *hora, int *min, int *seg)
{
	*hora = totalSeg / 3600;
	*min = totalSeg % 3600;
	*seg = *min % 60;
	*min /= 60; 
}
#include<stdio.h>
int main ()
{
	int hora, min, seg;
	long int totalseg = 3661;
	dividir_segundos(totalseg, &hora, &min, &seg);
	printf("%li, %i: %i: %i", totalseg, hora, min, seg);
	return 0;
}