#include <stdio.h>
#include <stdlib.h>

void funkcja (double **tab, int n, int m)
{	
	int i;
	
	for(i=0; i<n; i++)
	{
		free(tab[i]);
	}
	free (tab);
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
	
	funkcja(tab, n, m);
	
	return 0;
	
}
