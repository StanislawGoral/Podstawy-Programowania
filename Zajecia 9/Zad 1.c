#include <stdio.h>

int funkcja (unsigned int n, unsigned int m)
{
	int **tab = malloc (n * sizeof(int**));
	int i;
	
	for(i=0; i<n; i++)
	{
		tab[i] = malloc (m * sizeof(int*));
	}
	
	return tab;
}

int main()
{
	int n = 4;
	int m = 5;
	
	int wynik = funkcja(n, m);
	
	printf("%p", wynik);
	
	return 0;
}

