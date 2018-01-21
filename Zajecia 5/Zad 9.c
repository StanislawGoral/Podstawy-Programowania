#include <stdio.h>

//   Nie uda³o mi siê znaleŸæ indeksu drugiego co do wielkoœci elementu, zamiast tego jest pierwszy.

int funkcja (int tab[], int rozmiar)
{
	int i;
	int max = 0;
	int szukana;
	
	for (i=0; i<rozmiar; i++)
	{
		scanf("%d", &tab[i]);
		(tab[i]>max) ? (max = tab[i]) && (szukana = i) : (max = max);
	}
	
	return szukana + 1;
	
}

int main()
{

	int tab[10];
	int wynik;
	wynik = funkcja(tab, 10);
	
	printf("\nIndeks Maksimum: %d", wynik);
	
	return 0;
}
