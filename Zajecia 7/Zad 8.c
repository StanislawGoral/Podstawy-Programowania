#include <stdio.h>
#include <stdlib.h>

int funkyfunkcja (int* x, int* y, int a, int b)
{
	return (*x == *y) ? (a+b) : (a*b);
}

int main()
{
	int *x, *y;
	x = (int*) malloc (sizeof *x);
	y = (int*) malloc (sizeof *y);
	int a, b;
	a = 3;
	b = 4;
	scanf("%d", x);
	scanf("%d", y);
	
	int wynik = funkyfunkcja (x, y, a, b);
	
	printf("\n%d", wynik);
	
}
