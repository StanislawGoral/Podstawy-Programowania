#include <stdio.h>

int funkcja (n)
{
	int i;
	int suma = 0;
	
	if (n<6)
	{
		return n;
	}
	else
	{
		for(i=1; i<=3; i++)
		{
			suma+=funkcja(n-2*i);
		}
	}
	return suma;
}

int main()
{
	int n;
	
	printf("Podaj wyraz ciagu dla jakiego chcesz obliczyc wartosc:\n\n");
	scanf("%d", &n);
	
	int wynik = funkcja(n);
	
	printf("\nWartosc wyrazu: %d", wynik);
	
	return 0;
}
