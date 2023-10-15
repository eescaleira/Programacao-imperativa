
#include <stdio.h>

int main (int ac, char **av)
{
	int v1 = 31;
	int v2 = 30;
	int v3 = 35;
	int v4 = 30;

	printf("verdade ou meintira que v1 e diferente de v2: %d\n", v1 != v2);
	printf("verdade ou meintira que v2 e igual a v4: %d\n", v2 == v4);
	printf("verdade ou meintira que v1 e maior do que v3: %d\n", v1 > v3);
	printf("verdade ou meintira que v1 e menor ou igual a v4: %d\n", v1 <= v4);
	printf("verdade ou meintira que v1 e menor que v3 e maior que v4: %d\n", v1 < v3 && v1 > v4);
	return 0;
}