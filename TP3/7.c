#include<stdio.h>
int main ()
{
	int n1;
	char op;
	int n2;
	int v;
	for(1; ; )
	{
		scanf("%i", &n1);
		scanf(" %c", &op);
		scanf("%i", &n2);
		switch(op)
		{
			case '+':
				printf("%i\n", n1 + n2);
				break;
			case '-':
				printf("%i\n", n1 - n2);
				break;
			case '*':
				printf("%i\n", n1 * n2);
				break;
			case '/':
				printf("%.2d\n", n1 / n2);
				break;
			default:
				printf("operacao desconhecida");
				break;
		}
		printf("Insira 1 para continuar ou 0 para terminar\n");
		scanf("%i", &v);
		if(v == 0)
			return 0;
	}
	return 0;
}