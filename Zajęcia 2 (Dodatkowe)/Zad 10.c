#include <stdio.h>

int main() 
{
	int i, n;
	
	printf("Podaj wartosc maksymalna:\n\n");
	scanf("%d", &n);

	printf("\nLiczby pierwsze do %d wlacznie:\n\n", n);

	
		for (i=2 ; i <= n; i++)
		{	
		 if((i % 2 != 0 || i == 2) && (i % 3 != 0 || i == 3) && (i % 5 != 0 || i == 5) && (i % 7 != 0 || i == 7) && (i % 11 != 0 || i == 11) &&  (i % 13 != 0 || i == 13))
			{
	 			printf("%d\n",i);
			}
		}

		
	
	
	
	return 0;
}
