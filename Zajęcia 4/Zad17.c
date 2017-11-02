#include <stdio.h>

int cyfry(int x)
{
	int suma=0;
	
	
	do
		{
			if(x%10 == 3 || x%10 == 6 || x%10 == 9)
			{
				suma++;
			}
			x/=10;
		}
		while(x!=0);	
	
	return suma;
}

int main()
{
	int x;
	
	printf("Podaj liczbe calkowita x:\n\n");
	scanf("%d", &x);
	
	int cyf = cyfry(x);
	
	printf("Ilosc cyfr podzielnych przez 3 w liczbie %d wynosi %d", x, cyf);
	
	return 0;
}
