#include <stdio.h>

int main()
{
	int x1, x2;
	int d1, d2;
	int NWD;
	int mod1, mod2;

	printf("Podaj pierwsza liczbe:\n\n");
	scanf("%d", &x1);
	
	printf("\nPodaj druga liczbe:\n\n");
	scanf("%d", &x2);
	
	printf("\n\nDzielniki liczby: %d\n\n", x1);
	for (d1 = x1; d1 >= 1; d1--)
	{
		mod1 = x1 % d1;
		
		if (mod1 == 0)
		{
			printf("  | %d\n", d1);
		}
	}
	
	printf("\n\nDzielniki liczby: %d\n\n", x2);
	for (d2 = x2; d2 >= 1; d2--)
	{
	
		mod2 = x2 % d2;
		
		if (mod2 == 0)
		{
			printf("  | %d\n", d2);
		}
	}
	printf("\nWSPOLNE DZIELNIKI: ");
	for (d1 = x1; d1 >= 1; d1--)
	{
			mod1 = x1 % d1;
			
		for (d2 = x2; d2 >= 1; d2--)
		{
		    mod2 = x2 % d2;
		    
			if (d1 == d2 && mod1 == 0 && mod2 == 0)
			{
				printf("%d, ", d1);
			}
		}
	}
	printf("\n                   ^\n");
	printf("                   |\n");
	printf("\n                  NWD\n");
	
	return 0;
}
