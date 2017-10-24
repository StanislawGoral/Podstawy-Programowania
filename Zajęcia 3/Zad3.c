#include <stdio.h>

int suma(int n)
{
	int i = 1;
	int s = 0;
	for (i=1; i <= n; i+=2)
	{
		s+=i;
	}
	
	return s;
}

int main()
{
	int n;
	
	printf("Podaj granice zbioru:\n\n");
	scanf("%d", &n);
	int wynik = suma(n);
	printf("\nSuma wyrazow nieparzystych z przedzialu <0,%d> = %d", n, wynik);
	
	return 0;
}
