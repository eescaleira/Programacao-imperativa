#include<stdio.h>
int main()
{
	int i;
	unsigned int capacidade_sala[10] = {40, 45, 30, 60, 50, 45, 80, 35, 65, 90};
	double area_sala[10] = {30.0, 42.5, 35.75, 42.25};
	float ocupacao_sala[10];
	ocupacao_sala[2] = 0.6;
	ocupacao_sala[5] = 0.45;
	ocupacao_sala[6] = 0.8;
	ocupacao_sala[9] = 0.75;
	printf("capacidade_sala:");
	for(i = 0; i < 10; i++)
		printf("%u ", capacidade_sala[i]);
	printf("\n");

	printf("area_sala:");
	for(i = 0;  i < 4; i++)
		printf("%.2f ", area_sala[i]);
	printf("\n");

	printf("ocupacao_sala:");
	for(i = 0;  i < 10; i++)
		if(ocupacao_sala[i] >= 0 && ocupacao_sala[i] <= 1)
			printf("%.2f ", ocupacao_sala[i]);
		else
			printf("NULL ");
	return 0;
}
