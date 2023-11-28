void media_soma(double a[], int n, double *med, double *soma)
{
	int i;
	*soma = 0.0;
	for (i=0; i<n; i++)
		*soma += a[i];
	*med = *soma / n;
}