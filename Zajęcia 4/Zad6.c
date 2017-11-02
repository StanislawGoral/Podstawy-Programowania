#include <stdio.h>

int funkcja (int n)
{
	if (n >= 0)
	{
		int i;
		
		for(i=0; i<=i; i++)
		{
			if((i % 2 != 0 || i == 2) && (i % 3 != 0 || i == 3) && (i % 5 != 0 || i == 5) && (i % 7 != 0 || i == 7) && (i % 11 != 0 || i == 11) &&  (i % 13 != 0 || i == 13) && i > n)
			return i;
		}
	}
	else;

	
}

int main()
{
	int n;
	
	printf("Podaj liczbe calkowita:\n\n");
	scanf("%d", &n);
	
	while(n<0)
	{
		printf("\nPodaj liczbe nieujemna!\n\n");
		scanf("%d", &n);
	}
	
	int pierw = funkcja(n);
	
	printf("\nNajmniejsza liczba pierwsza wieksza od n to: %d", pierw);
	

	return 0;
}
