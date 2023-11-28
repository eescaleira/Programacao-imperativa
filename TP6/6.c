
#include <stdio.h>

void misterio ( int n )
{
	if (n != 0) {
	misterio (n / 2);
	putchar ('0' + n % 2);
	}
}

int main ()
{
	int i;
	scanf ("%i", &i);
	misterio (i);
	return 0;
}