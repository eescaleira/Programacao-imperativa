#include <stdio.h>
int main ()
{
	int n, i = 0, i2 = 0;
	scanf("%i", &n);
	i2 = n;
	for(5 <= n <= 15; n > 0;  i2 = n - 1, n--,  printf("\n"))
		while(i2-- > 0)
			printf("#");
	return 0;
}
// alterar para implementar um if-else