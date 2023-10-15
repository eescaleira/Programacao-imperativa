
#include <stdio.h>

int main (int ac , char **av)
{
	int x = 6;
	int y = 3;
	int z;
	
	x--;
	++y;
	printf("x: %i\ny: %i\n\n", x, y);
	
	z = x-- + y++;
	printf("x: %i\ny: %i \nz: %i\n\n", x, y, z);

	z = 2 * x-- + 3 * y++;
	printf("x: %i\ny: %i \nz: %i\n\n", x, y, z);

	z = --x - ++y;
	printf("x: %i\ny: %i \nz: %i\n\n", x, y, z);

	z = --x * 3 + ++y * 4;
	printf("x: %i\ny: %i \nz: %i\n\n", x, y, z);
	return 0;
}