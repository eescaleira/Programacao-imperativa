#include <stdio.h>
int main(void)
{
	unsigned int x;
	printf("Introduza um numero: ");
	scanf("%u",&x);
	// if(x>=10) 
	// {
	// 	printf("x>=10\n");
	// }
	// else 
	// {
	// 	if(x>=5)
	// 		printf("x>=5 e x<10\n");
	// 	else
	// 		printf("x>=0 e x<5");
	// }
	(x >= 10) ? printf("x>=10\n") : ((x>=5) ? printf("x>=5 e x<10\n") : printf("x>=0 e x<5\n"));
	return 0;
}