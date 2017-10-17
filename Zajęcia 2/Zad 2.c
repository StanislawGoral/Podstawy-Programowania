#include <stdio.h>
#include <math.h>
int main()

{
	double a, b, c, delta;
	
	printf("KALKULATOR PIERWIASTKOW FUNKCJI KWADRATOWEJ\n\n");
	
	printf("Podaj parametr a:\n\n");
	scanf("%lf", &a);
	
	printf("\nPodaj parametr b:\n\n");
	scanf("%lf", &b);
	
	printf("\nPodaj parametr c:\n\n");
	scanf("%lf", &c);
	
	delta = b * b - 4 * (a * c);
	if (a != 0)
	{
		if (delta == 0)
		{
			printf("\nDelta wynosi: %.2lf", delta);
			int x0 = -b/(2*a);
			printf("\nPierwiastek x0 wynosi: %.2lf", x0);
		}
	
		else if (delta > 0)
		{
			printf("\nDelta wynosi: %.2lf", delta);	
			double sqDelta = sqrt(delta);
			printf("\nPierwiastek z delty wynosi: %.2lf", sqDelta);
       	 double x1 = (-b+sqDelta)/(2*a);
       	 double x2 = (-b-sqDelta)/(2*a);
       	 printf("\n\nPierwiastek x1 wynosi: %.2lf\n\nPierwiastek x2 wynosi: %.2lf\n", x1, x2);
		}	
	
		else
		{
			printf("\nFunkcja nie ma pierwiastkow rzeczywistych!");
		}
	}
		else 
		{
			printf("\nFunkcja nie jest funkcja kwadratowa!");
		}
		
	return 0;
}
