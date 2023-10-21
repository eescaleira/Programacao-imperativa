
#include<stdio.h>
int main ()
{
	int i1 = 0, temp;
	do
	{
		scanf("%i", &temp);
		if(temp < 0)
			return 0;
		i1++;
	} while (i1 < 3);
	return 0;
}
