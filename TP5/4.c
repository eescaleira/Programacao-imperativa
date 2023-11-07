#include<stdio.h>
int main()
{
	int total = 0,mi[4][8] = {{1, 3, 5, 7, 9, 11, 13, 15},
								{0, 2, 4, 6, 8,10 ,12 ,14},
								{17 ,19 ,21 ,23 ,25 ,27 ,29 ,31},
								{16, 18, 20 ,22 ,24 ,26 ,28 ,3}};
	for(int i = 0; i < 4; i++)
		for(int j = 0; j < 8; j++)
			total += mi[i][j];
	float totalF = (float)total;
	printf("Totalf: %.0f\n", totalF);
	float mf[4][8];
	for(int i = 0; i < 4; i++)
		for(int j = 0; j < 8; j++)
		{
			mf[i][j] = 0;
			mf[i][j] += mi[i][j] / totalF;
			printf("mf[%i][%i]: %f\n", i, j, mf[i][j]);
		}
	return 0;
}
