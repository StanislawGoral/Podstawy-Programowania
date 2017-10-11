#include <stdio.h>



int main()
{
	double a, h, poleTroj;  // Deklaracja zmiennych 
	
	printf("Podaj dlugosc podstawy trojkata:\n\n");  //  Wprowadzanie dlugosci
	scanf("%lf", &a);
	printf("\na: %lf", a);
	
	printf("\n\nPodaj wysokosc trojkata: \n\n");  //  Wprowadzanie wysokosci
	scanf("%lf", &h);
	printf("\nh: %lf", h);
	
	poleTroj = (a * h)/ 2;  //  Obliczenia
	
	printf("\n\nPOLE TROJKATA WYNOSI: (%lf * %lf) / 2 = %.2lf\n", a, h, poleTroj);  //  Prezentacja wyniku
	
	return 0;
}
