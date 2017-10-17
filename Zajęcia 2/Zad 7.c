#include <stdio.h>

int main()
{
	int x, n, mod;
	n = 1;
	
	printf("Podaj liczbe:\n\n");
	scanf("%d", &x);
	printf("\nDzielniki liczby %d:\n\n", x);
	
	while(n <= x)
	{
		mod = x % n;
		
		if(mod == 0)
		{
			printf("%d\n", n);
		}
		n++;
	}	
	return 0;
}
