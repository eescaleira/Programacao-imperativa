
#include <stdio.h>
#include <stdbool.h>

int main (int ac, char **av)
{
	bool x ,y;
	x = false;
	y = true;

	printf("O valor logico de 'x e y' = %d\n", x && y);
	printf("O valor logico de 'nao(x) e y' = %d\n", !x && y);
	printf("O valor logico de 'y ou (x e nao(y))' = %d\n", y || (x && !y));
	printf("O valor logico de 'nao(x ou y) = %d\n", !(x || y));
	return 0;
}