#include <stdio.h>

int silnia(n)
{
	switch(n)
	{
		case 0:
	    	return 0;
			break;
		case 1:
			return 1;
			break;
		default:
			return silnia(n-1)*n;
	}
}

int main()
{
	int n;
	
	printf("Podaj liczbe z ktorej chcesz obliczyc silnie: \n\n");
	scanf("%d", &n);
	
	int sil = silnia(n);
	
	printf("\nSilnia z liczby %d wynosi: %d", n, sil);
	
	return 0;
}
