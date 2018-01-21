#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

bool funkcja (char **napis1, char **napis2, int m, int n)
{
	int i, j;
	int check = 0;
	
	for (i=0; i<m; i++)
	{
		(strcmp(napis1[i], napis2[i]) == 0) ? (check++) : (check = check);
	}
	printf("\n\nCheck:%d (%d)\n", check, m);
	return (check == m) ? true : false;
}	

int main()
{
	int i, j;
	int m = 5;
	int n = 256;
		
	char **napis1 = malloc (m * sizeof(char**));
	for (i=0; i<m; i++)
	{
		napis1[i] = malloc (n * sizeof(char*));
	}
	
	char **napis2 = malloc (m * sizeof(char**));
	for (i=0; i<m; i++)
	{
		napis2[i] = malloc (n * sizeof(char*));
	}

	printf("Podaj elementy pierwszej tablicy:\n\n");	
	for (i=0; i<m; i++)
	{
		fgets(napis1[i], n, stdin);	
	}
	printf("\nPodaj elementy drugiej tablicy:\n\n");
	for (i=0; i<m; i++)
	{
		fgets(napis2[i], n, stdin);	
	}
	printf("\nTablica #1:\n\n");
	for (i=0; i<m; i++)
	{
		printf("%s", napis1[i]);
	}
	printf("\nTablica #2:\n\n");
	for (i=0; i<m; i++)
	{
		printf("%s", napis2[i]);
	}
	
	bool wynik = funkcja(napis1, napis2, m, n);
	
	(wynik == true) ? (printf("\nTablice zawieraja takie same elementy (1)")) : (printf("\nTablice zawieraja rozne elementy (0)"));
	
	return 0;
}

