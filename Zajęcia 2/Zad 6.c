#include <stdio.h>

int main()
{
	int i, j, wynik;
	i = 1;
	
	printf("==================================================\n               TABLICZKA MNOZENIA\n==================================================\n");
	
	for(j = 1; j <= 10; j++)
	{
		for(i = 1; i <= 10; i++)
	    {
	    	wynik = i * j;
			if (wynik < 10)
			{
				
				printf("  %d |", wynik);
			}
			else if (wynik >= 10 && wynik < 100)
			{
			
				printf(" %d |", wynik);
			}
			else if (wynik <= 100)
			{
				printf(" %d|", wynik);
			}
		}
		printf("\n--------------------------------------------------\n");
		
	}
	
	return 0;
}
