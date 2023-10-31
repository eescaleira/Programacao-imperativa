#include <stdbool.h>
#include <stdio.h>
int main()
{
	unsigned int i = 0x4A378563;
	unsigned int mask1 = 0x0000FFFF;
	printf("Int   :%i\n", i);
	printf("Short :%hi %hi\n", i >> 16, (i & mask1));
	printf("Int   :%c %c %c %c\n", 0x4A, 0x37, 0x85, 0x63);
	printf("Float :%d\n", 0x4A378563);
	return 0;
}// escrever valores manualmente
