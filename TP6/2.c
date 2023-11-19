
#include<stdio.h>

void func2(int i, int j, int *res, int *quo)
{
	// return (i *j); 1 passo  (return value precisa ser int)

	*res = i * j;
	*quo = i / j;
}

int main()
{
	int res;
	int quo;
	func2(5, 2, &res, &quo);
	printf("Produto: %i\nQuociente:%i", res, quo);
	return 0;
} 