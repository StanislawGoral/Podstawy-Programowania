#include <stdio.h>

int main() 
{
	double a, b, h, poleProst;  //  Deklaracja zmiennych
	
	printf("POLE PROSTOPADLOSCIANU");
	printf ("\n\n     ________\n    /       /|\n   /_______/ |\n   |       | |\n   |       | |         P = 2ab + 2bh + 2ah\n   |       |h|\n   |       | |\n   |       | /\n   |_______|/ b\n       a\n\n");  //  Rysunek
	
	printf("Podaj dlugosc:\n\n");  //  Wprowadzanie danych
	scanf("%lf", &a);
	printf("\na = %lf\n\n", a);

	printf("Podaj szerokosc:\n\n");
	scanf("%lf", &b);
	printf("\nb = %lf\n\n", b);
	
	printf("Podaj wysokosc:\n\n");
	scanf("%lf", &h);
	printf("\nh = %lf\n\n", h);
	
	poleProst = 2 * (a * b) + 2 * (b * h) + 2 * (a * h);  //  Obliczenia
	
	printf("P = 2 * %.2lf * %.2lf + 2 * %.2lf * %.2lf + 2 * %.2lf * %.2lf = %.2lf", a, b, b, h, a, h, poleProst);  //  Prezentacja wyniku
	
	return 0;
}
