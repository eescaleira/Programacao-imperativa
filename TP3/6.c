
#include<stdio.h>
int main ()
{
	int i1 = 0, temp;
	while(i1++ < 31)
	{
		printf("%i: ", i1);
		switch (i1 %7)
		{
		case 0:
			printf("sabado\n");
			break;
		case 1:
			printf("domingo\n");
			break;
		case 2:
			printf("segunda-feira\n");
			break;
		case 3:
			printf("terca-feira\n");
			break;
		case 4:
			printf("quarta-feira\n");
			break;
		case 5:
			printf("quinta-feira\n");
			break;
		case 6:
			printf("sexta-feira\n");
			break;
		default:
			break;
		}
	}
	return 0;
}
