#include<stdio.h>
#include <stdbool.h>
int main()
{
	unsigned short n1, n2, m5, v1 = 0xc, v3 =0x200 , v2 = 0x100; 
	printf("Introduza dois valores positivos menores que 32000: ");
	scanf("%hd", &n1);
	scanf("%hd", &n2);
	//
	printf("A nivel binario %#x ou %#x = %#x\n", n1, n2, n1 | n2);
	//
	m5 = n1 << 2;
	m5 += n1;
	//
	n1 = n1 | v1;
	//
	printf("Na posicao 8 o bit e %d\nNa posicao 9 o bit e %d\n", n2 & v2, n2 & v3);
	return 0;
}