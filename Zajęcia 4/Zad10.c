#include <stdio.h>

int funkcja(int n)
{
	int suma = n + n-1 + n-2;
	return suma;
}

int main()
{
	int n;
	
	printf("Podaj liczbe:\n\n");
	scanf("%d", &n);
	
	int wynik = funkcja(n);
	
	printf("\nSuma trzech kolejnych liczb calkowitych z ktorych najwieksza to %d wynosi %d.", n, wynik);
	
	return 0;
}

