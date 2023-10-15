#include<stdio.h>
int main (int ac, char **av)
{
	short int a = 5;
	short int b = 512;
	short int c = 71;

	short int res1 = a << 2;
	short int res2 = a << 3;
	short int res3 = a << 4;
	short int res4 = b >> 1;
	short int res5 = b >> 2;
	short int res6 = b >> 3;
	short int res7 = c >> 2;
	short int res8 = c >> 3;
	printf("res1: %hi\nres2: %hi\nres3: %hi\nres4: %hi\nres5: %hi\nres6: %hi\nres7: %hi\nres8: %hi\n", res1, res2, res3, res4, res5, res6, res7, res8);
	return 0;
}