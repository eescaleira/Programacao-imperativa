#include<stdio.h>
void copia_nao_nulos(int *a1, int *a2, int *dest)
{
	int index = 0, *temp = dest;
	for( ; a1 != NULL; a1++)
		if(a1 != 0)
		{
			temp = a1;
			temp++;
		}	
	for( ; a2 != NULL; a2++)
		if(a2 != 0)
		{
			temp = a2;
			temp++;
		}
		temp = NULL;
}

int main()
{
	int *a1, *a2, *res;
	copia_nao_nulos(a1, a2, res);
	return 0;
}