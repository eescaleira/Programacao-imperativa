#include <stdio.h>
int main ()
{
	int n, i = 10;
	scanf("%i", &n);
	do
		if(n < 10 )
			return 0;
	while(i++ <= 50);
		if(i == 50 && i != n)
			return 0;
	while(n-- > 0)
		printf("-");
	printf("\n");	
	return 0;
}
