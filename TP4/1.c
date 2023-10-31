#include <stdbool.h>
#include <stdio.h>
int main()
{
	printf("Data type   Size\n");
	printf("Char       : %lu\n", sizeof(char));
	printf("short      : %lu\n", sizeof(short));
	printf("Int        : %lu\n", sizeof(int));
	printf("Long       : %lu\n", sizeof(long));
	printf("Long long  : %lu\n", sizeof(long long));
	printf("Float      : %lu\n", sizeof(float));
	printf("Double     : %lu\n", sizeof(double));
	printf("Long double: %lu\n", sizeof(long double));
	printf("_Bool      : %lu\n", sizeof(_Bool));
	return 0;
}