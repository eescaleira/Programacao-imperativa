
void printN(unsigned int n)
{
	for(int i = 1; i <= n; i++)
		printf("%i\n", i);	
}

void printN(unsigned int n)
{
	if(n==0)
		return;
	printN(n-1);
	printf("%i\n", n);
}