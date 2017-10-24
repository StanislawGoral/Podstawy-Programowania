#include <stdio.h>

int kwadraty (int n)
{
	int i = 1;
	int k;
	
	for (i=1; i<=n; i+=2)
	{
		k=i*i;
		printf("%d^2 = %d\n",i ,k);
	}
	
	return k;
}

int main()
{
	int n, i;
	i = 1;
	
	printf("Podaj granice zbioru:\n\n");
	scanf("%d", &n);
	
	printf("\nKwadraty liczb nieparzystych w przedziale <0,%d>\n\n", n);
	
	int wynik = kwadraty(n);
	

	return 0;
}
