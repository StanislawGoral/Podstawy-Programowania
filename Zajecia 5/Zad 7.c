#include<stdio.h>
#include<time.h>


int main()
{
	srand(time(NULL));
	int tab[5];
	int i;
	int max;
	
	for(i=0; i<5; i++)
	{
		tab[i] = rand();
		printf("%d\n", tab[i]);
		if(tab[i]>tab[i-1])
		{
			max = tab[i];
		}
	}
	
	printf("\nMax = %d", max);
	
	return 0;
}

