#include<stdio.h>
int main(int argc, char*argv[])
{
	int n1;
	int n2;
	printf("Primeiro numero        : ");
	scanf("%i", &n1);
	printf("Segundo numero         : ");
	scanf("%i", &n2);
	printf("    -------------------:\n");
	printf("   |Soma               : %i\n", n1 + n2);
	printf("   |Multiplicacao      : %i\n", n1 * n2);
	printf("    -------------------:\n");
	return 0;
}