#include <stdio.h>

int funkcja (float a, float b)
{
	int c1, c2;
	float r1, r2;
	c1 = (int)a;
	c2 = (int)b;
	r1 = a - c1;
	r2 = b - c2;
	
	printf("\nCzesc ulamkowa a: %.2f\n\nCzesc ulamkowa liczby b: %.2f\n", r1, r2);
	
	if(r1==r2)
	{
		return 1;
	}
	else
	return 0;
}

int main()
{
	float a, b;
	
	printf("Podaj a:\n\n");
	scanf("%f", &a);
	
	printf("\nPodaj b:\n\n");
	scanf("%f", &b);
	
	int wynik = funkcja (a, b);
	
	if (wynik == 1)
	{
		printf("\n\nCzesci ulamkowe liczb a i b sa rowne.");
	}
	else if(wynik == 0)
	{
		printf("\n\nCzesci ulamkowe liczb a i b NIE sa rowne");
	}
	
	return 0;
	
}
