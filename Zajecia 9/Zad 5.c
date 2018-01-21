#include <stdio.h>
#include <stdlib.h>

void input (double **tab, int m, int n)
{	
	int i, j;
	
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			scanf("%lf", &tab[i][j]);
		}
	}
}

double sum (double **tab, int m, int n)
{
	int i, j;
	double suma = 0;
	
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			suma += tab[i][j];
		}
	}
	
	return suma;
}

int main()
{
	int m = 3;
	int n = 2;
	
	double **tab = malloc (m * sizeof(double**));
	
	int i, j, k;
	
	for(i=0; i<m; i++)
	{
		tab[i] = malloc (n * sizeof(double*));
	}
	
	input(tab, m, n);

	printf("\nTABLICA:\n\n");

	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("%lf\t", tab[i][j]);
		}
		printf("\n");
	}
	
	
	
	double wynik = sum(tab, m, n);
	
	printf("\nSuma: %lf", wynik);
	
	return 0;
	
}
