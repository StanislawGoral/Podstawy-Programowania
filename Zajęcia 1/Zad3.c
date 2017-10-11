#include <stdio.h>


int main()
{

  	int x = 12;     //  Deklaracja zmiennych
  	int y = 5;
  	int wyDod;
  	int wyOdejm;
  	int wyMnoz;
  	int wyDziel;
  	int wyMod;
  	
  	wyDod = x + y;     //  Obliczenia
  	wyOdejm = x - y;
  	wyMnoz = x * y;
  	wyDziel = x / y;
  	wyMod = x % y;
  	
  	printf("Liczba pierwsza: %d\n""Liczba druga: %d\n\n", x, y );    //  Liczby uzyte w dzialaniach
  	
  	printf("Wynik dodawania: %d""\nWynik odejmowania: %d""\nWynik mnozenia: %d""\nWynik dzielenia: %d""\nModulo: %d", wyDod, wyOdejm, wyMnoz, wyDziel, wyMod);   //  Prezentacja wyników
  	             																																				

	return 0;

}

