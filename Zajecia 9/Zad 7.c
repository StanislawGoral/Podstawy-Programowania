#include <stdio.h>
#include <stdlib.h>
int deklaracja (int n)
{
	int i;
	int **tab = malloc (n * sizeof(int**));	

	for(i=0; i<n; i++)
	{
		tab[i] = malloc (n * sizeof(int*));
	}

	return tab;
}

void input (int **tab, int n)
{
	int i, j;
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			scanf("%d", &tab[i][j]);
		}
	}
}

void mnozenie (int **tab1, int **tab2, int **tab3, int n)
{
	int i, j, k;
	int suma = 0;
	
	for (i=0; i<n; i++)
	{
		for (j=0; j<n; j++)
		{
			suma = 0;
			for (k=0; k<n; k++)
			{
				suma = suma+(tab1[i][k]*tab2[k][j]);
				tab3[i][j] = suma;
			}
		}
	}
	
}

int main()
{
	int i, j, n;
	
	printf("Podaj wymiar macierzy kwadratowej:\n");
	
	scanf("%d", &n);
	
	int **tab1 = deklaracja(n);
	int **tab2 = deklaracja(n);
	int **tab3 = deklaracja(n);
	
	printf("\nPodaj elementy macierzy A:\n");
	input (tab1, n);
	printf("\nPodaj elementy macierzy B:\n");
	input (tab2, n);
	
	printf("\nMacierz A:\n\n");
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("%d  ", tab1[i][j]);
		}
		printf("\n\n");
	}
	
	printf("\nMacierz B:\n\n");
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("%d  ", tab2[i][j]);
		}
		printf("\n\n");
	}
	
	mnozenie (tab1, tab2, tab3, n);
	
	printf("\nWynik mnozenia macierzy:\n\n");
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("%d  ", tab3[i][j]);
		}
		printf("\n\n");
	}
	
	
	
}

