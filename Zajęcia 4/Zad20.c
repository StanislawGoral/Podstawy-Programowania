#include <stdio.h>

int fun(int x, int y)  

{
	if (y == x)
	{
		return x;
	}
	else if (x > y)
	{
		return 2*fun(x/y, y);
	}
	else
	{
		return 2*fun(x, y/x);
	}
}

int main()
{
	int x, y;
	
	printf("Podaj x:\n\n");
	scanf("%d", &x);
	
	printf("\nPodaj y:\n\n");
	scanf("%d", &y);
	
	int wynik = fun(x, y);
	
	printf("\nf(x,y) = %d", wynik);
	
	return 0;
	
}
