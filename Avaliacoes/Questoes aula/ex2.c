#include<stdio.h>
int main()
{
	int arrcount = 0;
	int rescount = 0;
	int size = 200;
	int arr[size], res[200];
	
	for(arrcount = 0; arrcount < size; arrcount++)
	{
		arr[arrcount] =  arrcount * 5 + 10;
		res[arrcount] = 0;
	}
	int check = 1;
	arrcount = 0;	
	for(int div = 2; arrcount < size ; arrcount++, div = 2, check = 1)
	{
		while(div < arr[arrcount])
		{
			if(arr[arrcount] % div == 0)
				check++;
			div++;
		}
		if(check == 1)
		{
			res[rescount] = arr[arrcount];
			rescount++;
		}
	}
	int i = 0;
	while(i++ < 200)
		printf("%i\n", res[i]);
	return 0;
}