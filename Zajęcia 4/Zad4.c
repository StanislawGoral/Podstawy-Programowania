#include <stdio.h>

int max(a, b)
{
	return (a>b)? a : b;
}

int min(a, b)
{
	return a + b - max(a, b);
}

int main()
{
	int a, b;
	
	printf("Podaj a:\n\n");
	scanf("%d", &a);
	
	printf("\nPodaj b:\n\n");
	scanf("%d", &b);
	
	int minim = min(a, b);
	
	printf("\nMinimum wynosi %d.", minim);
	
	return 0;
}
