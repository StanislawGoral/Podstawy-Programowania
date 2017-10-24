#include <stdio.h>

int funkcja(n)
{
	if(n==0)
	{
		return 1;
	}
	else if(n%2==0)
	{
		return (n*n)-5;
    }
    else
    {
    	return n*n;
	}
}

int main()
{
	int n;
	
	printf("Podaj wyraz ciagu: \n\n");
	scanf("%d", &n);
	
	int wyraz = funkcja(n);
	
	printf("\n%d wyraz ciagu wynosi: %d", n, wyraz);
}
