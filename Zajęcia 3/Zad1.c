#include <stdio.h>


int pole(a, h)
{
	return (a*h)/2;
}

int main() 
{	
	int a, h;
	
	printf("Podaj podstawe: \n\n");
	scanf("%d", &a);
	printf("\nPodaj wysokosc: \n\n");
	scanf("%d", &h);
	
	int wynik = pole (a, h);
	printf("\nPole: %d", wynik);
		
	return 0;
}
