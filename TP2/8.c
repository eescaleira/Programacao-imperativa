#include<stdio.h>
int main (int ac, char **av)
{
	unsigned char a = 0xB6;
	unsigned char b = 0x95;
	unsigned char res1;
	unsigned char res2;
	unsigned char res3;

	res1 = a & b;
	res2 = a | b;
	res3 = ~a;
	printf("res1: %#x\nres2: %#x\nres3: %#x\n", res1, res2, res3);
	return 0;
}