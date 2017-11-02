#include <stdio.h>

int main()
{
	int x, y;
	float wynik;
	
	printf("Podaj x:\n\n");
	scanf("%d", &x);
	
	printf("\nPodaj y:\n\n");
	scanf("%d", &y);
	
	if (x<0)
	{
		x = x*(-1);
	}
	
	if (y<0)
	{
		y = y*(-1);
	}
	
	wynik = 1.0*(x + y)/2;
	
	printf("\nWynik = %.2f", wynik);
}
