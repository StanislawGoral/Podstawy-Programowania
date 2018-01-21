#include <stdio.h>
#include <math.h>

int funkcja(int tab[], int n)
{
	int suma = 0;
	
	do
	{
		int wyk = n-1;
		suma += tab[n] * pow(2, wyk);
		n--;
		wyk--;
 	}
	while(n>0);
	
	return suma;
}

int main()
{
	int rozmiar;
	printf("Podaj liczbe bitow: ");
	scanf("%d", &rozmiar);

	int tab[rozmiar];
	int n = rozmiar;
	
	printf("\nLiczba w systeme binarnym (0,1 oddzielone spacjami): ");
	
	while (n>0)
	{
		scanf("%d", &tab[n]);
		n--;
	}
	int wynik = funkcja(tab, rozmiar);
	
	printf("\nLiczba w systemie dziesietnym: %d", wynik);
	
	return 0;
}
