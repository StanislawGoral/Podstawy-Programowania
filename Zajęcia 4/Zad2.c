#include <stdio.h>

int funk(int x, int y)
{
		if(y == 0)
		{
			return x;
		}
		else if(x == 0)
		{
			return y;
		}
		else
		{
			return funk(x-1 ,y) + funk(x, y-1);
		}
}

int main()
{
	int x, y;
	
		printf("Podaj x:\n\n");
		scanf("%d", &x);
	
		printf("\nPodaj y:\n\n");
		scanf("%d", &y);
	
	while(x<0 || y<0)
	{
		printf("\nJedna lub obie liczby sa ujemne! Prosze wpisac dwie liczby nieujemne.\n\n");
	
		printf("Podaj x:\n\n");
		scanf("%d", &x);
	
		printf("\nPodaj y:\n\n");
		scanf("%d", &y);
	}
	
	
	int wynik = funk(x, y);
	
	printf("\nFunkcja dla podanych zmiennych przyjmuje wartosc %d.", wynik);
	
	return 0;
	
}
