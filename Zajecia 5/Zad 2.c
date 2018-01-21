#include<stdio.h>

int main()
{
	float tab[5];
	
	int i;
	float suma = 0;
	for(i=0; i<5; i++)
	{
		scanf("%f", &tab[i]);
		suma+=tab[i];
	}
	float srednia = suma/5;
	
	printf("\nSuma = %f\n", suma);
	printf("\nSrednia = %f\n", srednia);
	
	return 0;
	
}

