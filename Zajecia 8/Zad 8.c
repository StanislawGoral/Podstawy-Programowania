#include <stdio.h>
#include <stdlib.h>

sort(int *tab, int n)
{
	int i,j,pom;

	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(tab[i] > tab[j])
			{
				pom = tab[i];
				tab[i] = tab[j];
				tab[j] = pom;
			}
		}
	}

	for(i=0; i<n; i++)
	{
		printf("%d, ", tab[i]);
	}	
}

int main() 
{
	int i;
	int n;
	
	printf("Podaj n:\n");
	scanf("%d", &n);
	
	int *tab = (int*) malloc(8 * sizeof(int));
	
	for(i=0; i<n; i++)
	{
		scanf("%d", &tab[i]);
	}
	
	sort(tab, n);
	
	return 0;
}
