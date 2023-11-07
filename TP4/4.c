#include<stdio.h>
int main()
{
	double d1=1.75, d2, d3;
	int i1=3, i2=5, i3;
	float f1, f2, f3, f4;
	d2 = i1 + d1; // (a)
	i3 = i1 + 2 * d1; // (b)
	f1 = (float)i1 + 2.0 * (float)d1; // (c)
	f2 = i1 / i2; // (d)
	f3 = (float)i1 / (float)i2; // (e)
	f4 = (float)1245152500; // (f)
	d3 = (double)1245152500; // (g)
	printf("a: %.2f\nb: %d\nc: %.1f\nd: %.0f\ne: %.1f\nf: %.0f\ng: %.0f\n", d2, i3, f1, f2, f3, f4, d3);
	return(0);
}
