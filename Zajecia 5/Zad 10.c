#include <stdio.h>

void zero (int tab[], int rozmiar)
{
	int i, j;
	
	for (i=0; i<rozmiar; i++)
	{
		scanf("%d", &tab[i]);
		for(j=0; j<i; j++)
		{
			(tab[j] == tab[i]) ? (tab[i] = 0) : (tab[i] = tab[i]);
	 }
	}
}

int main()
{
	int rozmiar;
	int tab[10];
	
	printf("Podaj rozmiar tablicy:\n\n");
	scanf("%d", &rozmiar);
	printf("\n");
	
	zero(tab, rozmiar);
	
	int i;
	
	printf("\nElementy tablicy: ");

	for (i=0; i<rozmiar; i++)
	{
		printf("%d, ", tab[i]);
	}
	
	return 0;
	
}
