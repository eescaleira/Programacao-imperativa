int incognito (int n)
{
	if(n==1)
		return 1;
	else
		n += incognito(n-1);
	return n;
}