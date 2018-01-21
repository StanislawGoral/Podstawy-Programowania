#include<stdio.h>
#include<stdbool.h>

int elementy(int tab[] , int n)
{
	int i;
	printf("Zapisane liczby:\n\n");
	for(i=0; i<n; i++)
	{
		printf("%d, ", tab[i]);
	}
	printf("\n\nPodaj inna liczbe:\n");
}

bool poprawnosc(int tab[], int n, int x)
{
	int i;
	for(i=0; i<n; i++)
	{
		if (x == tab[i])
		{
			return true;
		}
	}
	return false;
}
	
int main()
{
	int tab[10];
	int i, x;
	
	for(i=0; i<10; )
	{
		scanf("%d", &x);
		if(poprawnosc(tab, i, x))
		{
			elementy(tab, i);
		}
		else	
		{
			tab[i]=x;
			i++;
		}
	}
	
	return 0;
}


