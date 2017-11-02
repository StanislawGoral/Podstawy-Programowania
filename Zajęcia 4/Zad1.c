#include <stdio.h>

int root(double n)
{
	int i;
	
	for(i=1; i*i<=n; i++)
	{
	}
	return i-1;
}

int main()
{
	int n;
	
	printf("Podaj liczbe pierwiastkowana:\n\n");
	scanf("%d", &n);
	
	int calk = root(n);
	
    printf("\nCzesc calkowita z pierwiastka z %d wynosi %d.", n, calk);
    
    return 0;
}
