#include <stdio.h>
int lb, dzielnik;

void dzielniki()
{
	printf("Podaj liczbe: \n\n");
	scanf("%d", &lb);
	printf("\nDzielniki liczby %d:\n\n", lb);
	
	for (dzielnik = lb; dzielnik > 1; dzielnik--)
	{
		if(lb%dzielnik==0)
		{
			printf("%d\n", dzielnik);
	    }
	}
	
	printf("%d\n", dzielnik);
}

int main() 
{
	
	dzielniki();
	
	return 0;
}
