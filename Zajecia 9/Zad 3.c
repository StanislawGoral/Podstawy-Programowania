#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//	Zmieni�em parametr na int bo rand() nie pokazywa� doubli.

void funkcja (int **tab, int n, int m)
{	
	int i, j;

	srand(time(NULL));
	
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			tab[j] = rand();
			printf("%d\t", tab[j]);
		}
		printf("\n\n");
	}
	
}

int main()
{
	int n = 4;
	int m = 8;
	
	int **tab = malloc (n * sizeof(int**));
	
	int i;
	
	for(i=0; i<n; i++)
	{
		tab[i] = malloc (m * sizeof(int*));
	}
	
	funkcja(tab, n, m);
	
	return 0;
	
}
