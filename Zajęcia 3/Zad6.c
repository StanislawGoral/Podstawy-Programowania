#include <stdio.h>

int pow (n)
{
	if (n < 0)
	{
		return pow(n+1)*2;
	}
	else
	switch (n)
	{
		case 0:	
			return 1;
			break;
		
		default:	
			return pow(n-1)*2;
			break;
			
	}
}

int main()
{
	int n;
	
	printf("Podaj wykladnik potegi liczby 2:\n\n");
	scanf("%d", &n);
	
	float wynik = pow(n);
	
	if (n<0)
	{
		printf("\n2^%d = %.3f", n, 1.0/wynik);
	}
	else 
	{
		printf("\n2^%d = %.3f", n, wynik);
	}
	
	return 0;
}
