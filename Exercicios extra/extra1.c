#include <stdbool.h>
#include <stdio.h>

int main()
{
	unsigned short n = 0xff;
	unsigned short mask = 0x80;
	bool v;
	int i = 1;
	while(i++ <= 8)
	{
		v = n & mask;
		printf("%d", v);
		mask = mask >> 1;
		(i % 4 == 1) ? printf(" "): 0;// if(i % 4 == 1)	// 	printf(" ");
	}
	printf("\n");
	return 0;
}
