#include <stdio.h>

int pot(int p, int w)
{
	int i;
	int potega = 0;
	
	for(i=0; i<=w; i++)
	{
		if(w==0)
		{
			return 1;
		}
		else
		potega=p*pot(p, w-1);
	}
	return potega;
}

int main()
{
	int p, w;
	
	printf("Podaj podstawe:\n\n");
	scanf("%d", &p);
	
	printf("\nPodaj wykladnik:\n\n");
	scanf("%d", &w);
	
	int wynik = pot(p, w);
	
	printf("\n%d do potegi %d wynosi %d.", p, w, wynik);
	
	return 0;
}
