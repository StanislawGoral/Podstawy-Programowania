#include <stdio.h>

void funk(int n, int m)
{
	int i;

	for(i=1; i<n; i++)
	{
		int mod = i%m;
		if(mod == 0)
		{
			printf("%d\n", i);
		}
		else;
	}
}

int main()
{
	int n, m;
	
	printf("Podaj n:\n\n");
	scanf("%d", &n);
	
	printf("\nPodaj m:\n\n");
	scanf("%d", &m);
	
	printf("\nLiczby nieujemne mniejsze od %d podzielne przez %d:\n\n", n, m);
	funk(n, m);
	
	return 0;
}

