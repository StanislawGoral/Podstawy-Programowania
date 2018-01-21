#include<stdio.h>
#include<stdlib.h>

float max(float tabmx[], int size)
{
	int i = 0;
	float max = *tabmx;
	for ( ; i<size; i++)
	{
		(tabmx[i]>max) ? max = (tabmx[i]) : (max = max);
	}
	return max;
}

float min(float tabmn[], int size)
{
	int i = 0;
	float min = *tabmn;
	for ( ; i<size; i++)
	{
		(tabmn[i]<min) ? min = tabmn[i] : (min = min);
	}
	return min;
}

float suma (float tabsum[], int size)
{
	int i = 0;
	float suma = 0;
	for ( ; i<size; i++)
	{
		suma+=tabsum[i];
	}
	return suma;
}

float srednia (float tabsr[], int size)
{
	int i = 0;
	float suma = 0;
	for ( ; i<size; i++)
	{
		suma+=tabsr[i];
	}
	return suma/size;
}

int main()
{
	int n;
	scanf("%d", &n);
	printf("\n");
	
	float *tab;
	tab = (float*) malloc(n * sizeof(float));
	
	int i;
	
	for (i=0; i<n; i++)
	{
		scanf("%f", &tab[i]);
	}
	
	float maksimum = max(tab, n);
	printf("\n%f\n", maksimum);
	
	float minimum = min(tab, n);
	printf("\n%f\n", minimum);
	
	float sum = suma(tab, n);
	printf("\n%f\n", sum);
	
	float sr = srednia(tab, n);
	printf("\n%f\n", sr);
	
	free(tab);
	
	tab = NULL;
	
	(tab == NULL) ? printf("PAMIEC WOLNA") : printf("PAMIEC PELNA");
	
	return 0;
}
