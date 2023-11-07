#include<stdio.h>
int main()
{
	int vi = 275;
	char c, d, u;
	c = vi/100 + '0';
	d = (vi/10) % 10 + '0';
	u = vi  % 10;
	printf("centenas: %c\ndezenas: %c\nunidades: %i\n", c, d, u);
	return 0;
}