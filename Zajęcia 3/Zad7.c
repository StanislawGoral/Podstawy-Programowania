#include <stdio.h>

int ciag (n)
{
	if (n <= 0 || n == 10)
	{
		return 0;
	}
	else
	{
		return 2*ciag(n-1)+ciag(n-2)+5;
	}
}

int main()
{
	int n;
	
	printf("Podaj wyraz ciagu: \n\n");
	scanf("%d", &n);
	
	int wyraz = ciag(n);
	
	printf("\n%d wyraz ciagu wynosi: %d", n, wyraz);
	
}
