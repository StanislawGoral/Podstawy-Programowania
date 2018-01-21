#include<stdio.h>
#include<stdbool.h>

void kwadraty (int tab[], int rozmiar)
{
	int i;


	for(i=0; i<rozmiar; i++)
	{
		scanf("%d", &tab[i]);

	}
}

int main()
{
	int tab[5];
	
	kwadraty(tab, 5);
	
	return 0;
}

