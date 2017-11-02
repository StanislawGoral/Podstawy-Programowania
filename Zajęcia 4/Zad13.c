#include <stdio.h>

int main()
{
	int n, suma, nadw;
	
		printf("Podaj pierwsza liczbe naturalna:\n\n");
		scanf("%d", &n);
		suma += n;
	
	if(n<0)
	{
		printf("\nBLAD - LICZBA MNIEJSZA LUB ROWNA 0 !!!\n\n");
	}
	
	do
	{
		printf("\nPodaj kolejna liczbe naturalna:\n\n");
		scanf("%d", &n);
		
		if (n<0)
		{
			printf("\nBLAD - LICZBA MNIEJSZA LUB ROWNA 0 !!!\n\n");
		}
		else
		{
			suma += n;
		}
	}
	while (suma < 100);
	
	nadw = suma - 100;
	
	printf("\n\n\nSuma podanych liczb naturalnych = %d\n\n", suma);
	printf("Wartosc przekroczenia = %d", nadw);
	
	return 0;
}
