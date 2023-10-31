#include <stdio.h>
int main ()
{
	int base, i = 0, i2 = 0;
	scanf("%i", &base);
	for(5 <= base <= 15; i != base ; i2 = 0, i++,  printf("\n"))
		while(i2++ <= i)
			printf("*");
	return 0;
}
