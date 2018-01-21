#include<stdio.h>
#include<stdlib.h>

float dziel (float x, float y)
{
	return x/y;
}

int main()
{
	float x, y;
	
	scanf("%f", &x);
	scanf("%f", &y);

	float wynik = dziel(x, y);

	printf("%f", wynik);
	
	return 0;
	
}

