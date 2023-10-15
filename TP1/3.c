#include<stdio.h>
int main(int argc, char*argv[])
{
	unsigned long int g = 320040500;
	const double pi = 3.14159;
	char a = 'P';
	a = 'L';
	short int oct = 0xF5A7;
	oct = 075432;
	printf("g: %lu\npi: %.5f\na: %c\noct: %hi\n", g, pi, a, oct);
	return 0;
}