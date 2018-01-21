#include <stdio.h>
#include <stdlib.h>

void funkcja_zero (double **tab, int n, int m)
{	
	int i, j;
	
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			tab[j] = 0;
			printf("%lf\t", tab[j]);
		}
		printf("\n\n");
	}
	
}

int main()
{
	int n = 4;
	int m = 8;
	
	double **tab = malloc (n * sizeof(double**));
	
	int i;
	
	for(i=0; i<n; i++)
	{
		tab[i] = malloc (m * sizeof(double*));
	}
	
	funkcja_zero(tab, n, m);
	
	return 0;
	
}
