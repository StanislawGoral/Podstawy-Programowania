#include <stdio.h>


int main() 
{
	char a;  //  Deklaracja zmiennych
	char b;
	char c;
	char d;
    
	printf("Podaj litere #1 lub ciag liter (cztery pierwsze litery beda brane pod uwage!): \n");  //  Prosba o podanie zestawu liter 
	scanf("\n\n%c", &a);
	printf("Litera #1: %c", a);
	

	printf("\n\nPodaj litere #2: \n");
	scanf("\n\n%c", &b);
	printf("Litera #2: %c", b);
	
	printf("\n\nPodaj litere #3:\n");
	scanf("\n\n%c", &c);
	printf("Litera #3: %c", c);
	
	printf("\n\nPodaj litere #4:\n");
	scanf("\n\n%c", &d);
	printf("Litera #4: %c", d);


	printf("\n\nDostepne kombinacje:\n\n");  

	printf("%c" "%c" "%c" "%c\n", a, b, c, d);  //  Prezentacja mozliwych kombinacji dla danego zestawu liter
	printf("%c" "%c" "%c" "%c\n", a, c, b, d);
	printf("%c" "%c" "%c" "%c\n", a, d, b, c);
	printf("%c" "%c" "%c" "%c\n", a, c, d, b);
	printf("%c" "%c" "%c" "%c\n", a, b, d, c);
	printf("%c" "%c" "%c" "%c\n", a, d, c, b);
	printf("%c" "%c" "%c" "%c\n", b, a, c, d);
	printf("%c" "%c" "%c" "%c\n", b, a, d, c);
	printf("%c" "%c" "%c" "%c\n", b, c, a, d);
	printf("%c" "%c" "%c" "%c\n", b, c, d, a);
	printf("%c" "%c" "%c" "%c\n", b, d, a, c);
	printf("%c" "%c" "%c" "%c\n", b, d, c, a);
	printf("%c" "%c" "%c" "%c\n", c, a, b, d);
	printf("%c" "%c" "%c" "%c\n", c, a, d, b);
	printf("%c" "%c" "%c" "%c\n", c, b, a, d);
	printf("%c" "%c" "%c" "%c\n", c, b, d, a);
	printf("%c" "%c" "%c" "%c\n", c, d, a, b);
	printf("%c" "%c" "%c" "%c\n", c, d, b, a);
	printf("%c" "%c" "%c" "%c\n", d, a, b, c);
	printf("%c" "%c" "%c" "%c\n", d, a, c, b);
	printf("%c" "%c" "%c" "%c\n", d, b, a, c);
	printf("%c" "%c" "%c" "%c\n", d, b, c, a);
	printf("%c" "%c" "%c" "%c\n", d, c, a, b);
	printf("%c" "%c" "%c" "%c\n", d, c, b, a);
	
	return 0;
}
