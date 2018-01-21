#include<stdio.h>


void zmiana (float tab1[], float tab2[], int rozmiar)
{
	int i, j=0;
	for (i=0; i<rozmiar; i++)
	{
		tab2[j] = tab1[i];
		printf("Tab1[%d] = %f---Tab2[%d] = %f\n", i, tab1[i], j, tab2[j]);
		j++;
	}
}

int main()
{
	float tab1[10];
	float tab2[10];
	
	int i;
	for(i=0; i<10; i++)
	{
		scanf("%f", &tab1[i]);
	}
	
	zmiana(tab1, tab2, 10);
	
	
	
	return 0;
}

