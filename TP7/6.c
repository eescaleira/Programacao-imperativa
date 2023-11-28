#include<stdio.h>
void copia_nao_nulos(int *a1, int *a2, int *dest)
{
	int index = 0;
	for( ; a1 != NULL; a1++)
		if(a1 != 0)
		{
			dest = a1;
			dest++;
		}	
	for( ; a2 != NULL; a2++)
		if(a2 != 0)
		{
			dest = a2;
			dest++;
		}
}

int main()
{
	int *a1, *a2, *res;
	copia_nao_nulos(a1, a2, res);
	return 0;
}