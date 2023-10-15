#include <stdio.h>
int main(){
	unsigned short x = 0x3C5A;
	unsigned short mask = 0xFFB7; // calculado usando x & 1111 1111 1111 trocando 1 por 0 nas posicoes pedidas
	x = x & mask;
	printf("%#x\n", x);
	mask = 0x2200;
	x = x & mask;
	printf("%#x\n", x);
	return 0;
}