#include <stdio.h>

int main() 
{
	int a, x, b, y;    // Deklaracja zmiennych

	printf("Podaj zmienna 'a'.\n");      //  Wprowadzanie danych
	scanf("%d", &a); 							
	printf("\nLiczba a: %d\n\n", a);	     
	
	printf("Podaj zmienna 'x'.\n");
	scanf("%d", &x);
	printf("\nLiczba x: %d\n\n", x);
	
	printf("Podaj zmienna 'b'.\n");
	scanf("%d", &b);
	printf("\nLiczba b: %d\n\n", b);	
	
	y = a * x + b;   //  Obliczenia
	
	printf("\ny = ax+b =  %d", y);   // Prezentacja wyniku
		
	return 0;
}
