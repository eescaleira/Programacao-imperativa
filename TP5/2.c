#include<stdio.h>
int main()
{
	int i = 1, mul3[10], mul5[10], soma[10];
	while(i <= 10)
	{
		mul3[i -1] = i * 3;
		mul5[i -1] = i * 5;
		i++;
	}
	for(i = 0; i < 10; i++)
	{
		soma[i] = mul3[i] + mul5[i];
		printf("posicao %i -> %i + %i = %u\n", i, mul3[i], mul5[i], soma[i]);
	}
	return 0;
}