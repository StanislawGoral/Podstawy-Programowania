#include <stdio.h>

int main() 
{
	int a1, a2, a, b1, b2, b, n;

	printf("Podaj granice osi:\n\n");
	scanf("%d", &n);
	
	if (n > 0)
    {
    	printf("\nn = %d\n", n);
	}
	else
    {
    	do
    	{
    	    printf("\nWartosc nieprawidlowa! Podaj granice osi:\n\n");
    	    scanf("%d", &n);
		}
		while (n <= 0);
	}
	
	
	
	printf("\nPodaj granice poczatkowa zbioru A:\n\n");
	scanf("%d", &a1);
	
	if (a1 > 0 && a1 < n)
	{
		printf("\na1 = %d\n", a1);
	}
	else
	{   do
		{
			printf("\nWartosc nieprawidlowa! Podaj granice poczatkowa zbioru A:\n\n");
			scanf("%d", &a1);
		}
		while (a1 <=0 || a1 >= n);
	}
	
	printf("\nPodaj granice koncowa zbioru A:\n\n");
	scanf("%d", &a2);
	
	if (a2 > 0 && a2 < n && a2 > a1)
	{
		printf("\na2 = %d\n", a2);
	}
	else
	{   do
		{
			printf("\nWartosc nieprawidlowa! Podaj granice koncowa zbioru A:\n\n");
			scanf("%d", &a2);
		}
		while (a2 <=0 || a2 >= n || a2 < a1);
	}
	
	printf("\nPodaj granice poczatkowa zbioru B:\n\n");
	scanf("%d", &b1);
	
	if (b1 > 0 && b1 < n)
	{
		printf("\nb1 = %d\n", b1);
	}
	else
	{   do
		{
			printf("\nWartosc nieprawidlowa! Podaj granice poczatkowa zbioru B:\n\n");
			scanf("%d", &b1);
		}
		while (b1 <=0 || b1 >= n);
	}
	
	printf("\nPodaj granice koncowa zbioru B:\n\n");
	scanf("%d", &b2);
	
	if (a2 > 0 && a2 < n && a2 > a1 || b2 > b1)
	{
		printf("\nb2 = %d\n", b2);
	}
	else
	{   do
		{
			printf("\nWartosc nieprawidlowa! Podaj granice koncowa zbioru B:\n\n");
			scanf("%d", &a2);
		}
		while (b2 <=0 || b2 >= n || b2 < b1);
	}
	
	printf("\n\nZBIOR A:\n\n{");
	for(a = a1; a <= a2; a++)
	{
		printf("%d,", a);
	}
	printf("}");
	
	printf("\n\nZBIOR B:\n\n{");
	for(b = b1; b <= b2; b++)
	{
		printf("%d,", b);
	}
	printf("}");
	
	printf("\n\nCZESC WSPOLNA A i B:\n\n{");
	
	for(a = a1; a <= a2; a++)
	{
	 for(b = b1; b <= b2; b++)
    	if (a == b)
		{
		 printf("%d,", a) || printf("%d,", b);
    	}
    }
    printf("}");
	return 0;
}
