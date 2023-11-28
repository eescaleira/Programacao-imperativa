
#include <stdio.h>

void *preencher(int N, int v[N])
{
	for (int i = 0; i < N; i++)
		v[i] = i;
}

int main()
{
	int N;
	int v[N];
	scanf("%i", &N);
	preencher(N, v);
	return 0;
}