#include<stdio.h>

int n = 80;

void funk(int tab[n])
{
	int i;
	for(i=0; i<=n/2; i++)
	{
		tab[i] = 2*i;
		printf("Tab[%d] = %d\n", i, tab[i]);
	}
}

int main()
{
	int tab[n];
	
	funk(tab[n]);

	return 0;	
}

