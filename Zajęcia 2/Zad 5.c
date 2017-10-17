#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int stala, wybor;
	double x, y, wynik;
	stala = 1;
	
	while(stala == 1)
	{
	while(wybor == 0)
	{
	printf("--------------\n     MENU\n--------------\n");
	printf("1. Dodawanie\n\n");
	printf("2. Odejmowanie\n\n");
	printf("3. Mnozenie\n\n");
	printf("4. Dzielenie\n\n");
	printf("5. Potega\n\n");
	printf("6. Pierwiastek\n\n");
	printf("7. Wyjscie\n\n");
	
	scanf("%d", &wybor);
	
	printf("\nWybrano: %d\n", wybor);
	}
    
		switch(wybor)
		{
			
        while(wybor!=0)
		{
			
		case 1:
		
			printf("\nPodaj pierwsza liczbe:\n\n");
			scanf("%lf", &x);
			printf("\nPodaj druga liczbe:\n\n");
			scanf("%lf", &y);
			
			wynik = x + y;
			printf("\nWYNIK DODAWANIA: %.2lf\n\n", wynik);
			
			wybor = 0;
			
			break;
	
		case 2:
		
			printf("\nPodaj pierwsza liczbe:\n\n");
			scanf("%lf", &x);
			printf("\nPodaj druga liczbe:\n\n");
			scanf("%lf", &y);
			
			wynik = x - y;
			printf("\nWYNIK ODEJMOWANIA: %.2lf\n\n", wynik);
	
			wybor = 0;
	
			break;
	
		case 3:
		
			printf("\nPodaj pierwsza liczbe:\n\n");
			scanf("%lf", &x);
			printf("\nPodaj druga liczbe:\n\n");
			scanf("%lf", &y);
			
			wynik = x * y;
			printf("\nWYNIK MNOZENIAa: %.2lf\n\n", wynik);
	
			wybor = 0;
	
			break;
		
		case 4:
		
			printf("\nPodaj pierwsza liczbe:\n\n");
			scanf("%lf", &x);
			printf("\nPodaj druga liczbe:\n\n");
			scanf("%lf", &y);
			
			wynik = x / y;
			printf("\nWYNIK DZIELENIA: %.2lf\n\n", wynik);
			
			wybor = 0;
			
			break;
		
		case 5:
		
			printf("\nPodaj podstawe:\n\n");
			scanf("%lf", &x);
			
			printf("\nPodaj wykladnik:\n\n");
			scanf("%lf", &y);
		
			
			wynik = pow(x,y);
			printf("\nWYNIK POTEGOWANIA: %.2lf\n\n", wynik);
	
			wybor = 0;
	
			break;
		
		case 6:
		
			printf("\nPodaj liczbe pierwiastkowana:\n\n");
			scanf("%lf", &x);
			printf("\nPodaj wykladnik:\n\n");
			scanf("%lf", &y);
			y=1/y;
			
			wynik = pow (x,y);
			printf("\nPIERWIASTEK: %.2lf\n\n", wynik);
			
			wybor = 0;
			
			break;
		
		case 7:
			
			printf("\nWYJSCIE Z PROGRAMU!\n\n");
			wybor = 0;
	  	    
	  	    break;
	  	    
	  	default:
	  	
		  	printf("\nNieprawidlowa wartosc!\n\n");
		  	wybor = 0;
		  	
		  	break;
	  	
	
	  		
	}
}
}

	
	return 0;
}
