#include <stdio.h>

int fib (int n)
{
	switch (n)
	{
		case 0:
			return 0;
			break;
		case 1:
			return 1;
			break;
		case 2:
			return 1;
		default:
			return fib(n-1)+ fib(n-2);
	}
}
	
int main()
{
	int n;
	
	printf("Podaj ktory wyraz ciagu Fibonacciego chcesz obliczyc:\n\n");
	scanf("%d", &n);
	
	printf("\nWyraz #%d = %d",n ,fib(n));
	
	return 0;
}
