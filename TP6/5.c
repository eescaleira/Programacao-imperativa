#include <stdio.h>
double produtoInterno(int N, double v1[N], double v2[N])
{
	double res = 0;
	for (int i = 0; i < N; i++)
		res += v1[i] * v2[i];
	return res;
}

int main()
{
	int N;
	scanf("%i", &N);
	double v1[N];
	double v2[N];
	int res = produtoInterno(N, v1, v2);
	printf("%i", res);
	return 0;	
}