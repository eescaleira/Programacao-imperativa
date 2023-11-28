#include <stdio.h>
int main()
{
	int *p, x;
	x = 5;
	p = &x;
	printf("%i\n", *p);
	return 0;
}