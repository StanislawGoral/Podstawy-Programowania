#include<stdio.h>

int funkcja(int tab[], int rozmiar, int a)
{
	int i=0;
	
	do
	{
			(a%2 == 0) ? (tab[i] = 0) : (tab[i] = 1);
			a /= 2;
			i++;
	}
	while (a != 0);

	int c = i-1;
	
	printf("\nLiczba w systemie binarnym: ");
	
	for(c; c>=0; c--)
	{
		printf("%d ", tab[c]);
	}
}

int main()
{
	int x=256;
	int tab[x];
	int a;
	printf("Podaj liczbe w systemie dziesietnym: ");
	scanf("%d", &a);
	funkcja(tab, x, a);
}
