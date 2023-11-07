#include<stdio.h>
int main()
{
	unsigned char i;
	for(i = 48; i < 123; i++)
		if((i >= 47 && i < 58) || (i > 64 && i < 91) || (i > 96 && i < 123))
			printf("%3i: %c\n", i, i);
	return 0;
}