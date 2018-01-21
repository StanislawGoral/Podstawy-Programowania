#include<stdio.h>
#include<stdlib.h>

float wart_bez (float x)
{
	return abs(x);
}

int main()
{
	float liczba;
	
	scanf("%f", &liczba);

	float wynik = wart_bez(liczba);

	printf("%f", wynik);
	
	return 0;
	
}

