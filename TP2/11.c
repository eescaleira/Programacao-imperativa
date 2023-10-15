#include <stdio.h>
#include <stdbool.h>

int main ()
{
	unsigned short v1 = 0x40; 
	unsigned short v2 = 0x200;  
	unsigned short x;
	bool s, n;
	printf("Insira um valor:");
	scanf("%hu", &x);
	s = x & v1;
	n = x & v2;
	printf("Hexadecimal:%#x\nverificacao da posicao 6 usando o valor %#x -> %d\nverificacao da posicao 9 usando o valor %#x -> %d\n", x, v1, s, v2, n);
	return 0;
}