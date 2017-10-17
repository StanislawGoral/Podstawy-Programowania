#include <stdio.h>

int max;

int main ()

{
	int x, y, z;
	
	printf("Podaj pierwsza liczbe: \n\n");
	scanf("%d", &x);
	
	printf("\nPodaj druga liczbe: \n\n");
	scanf("%d", &y);
	
	printf("\nPodaj trzecie liczbe: \n\n");
	scanf("%d", &z);
	
	if (x > y && x > z)
	{
		max = x;
		printf("\nWartosc maksymalna: %d", max);
	}

	else if (y > x && y > z)
	{
		max = y;
		printf("\nWartosc maksymalna: %d", max);
	}
	
	else
	{
		max = z;
		printf("\nWartosc maksymalna: %d", max);
	}	
}
