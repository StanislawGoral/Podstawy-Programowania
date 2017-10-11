#include <stdio.h>
#include <math.h>


int main()
{
	double a1, a2, a3, srHarm;  //  Deklaracja zmiennych
	int n = 0;
	
	printf("Podaj pierwsza liczbe:\n\n");  //  Wprowadzanie pierwszej liczby
	scanf("%lf", &a1);
	n++;
	printf("Liczba #1: %lf\n\n", a1);
	
	printf("Podaj druga liczbe:\n\n");  //  Wprowadzanie drugiej liczby
	scanf("%lf", &a2); 
	n++;
	printf("Liczba #2 %lf\n\n", a2); 
	
	printf("Podaj trzecia liczbe:\n\n");  //  Wprowadzanie trzeciej liczby
	scanf("%lf", &a3);
	n++;
	printf("Liczba #3: %lf\n\n n = %d\n\n", a3, n);
	
	srHarm = n/((1/a1)+(1/a2)+(1/a3));  //  Obliczenia
	
	printf("SREDNIA HARMONICZNA Z PODANYCH LICZB WYNOSI: %.3lf\n", srHarm);  //  Prezentacja wyniku
	
	
	return 0;
}
