#include<stdio.h>
#include<stdlib.h>

void przenos(int* tab1, int* tab2, int* tab3, int size)
{
	int *tab4;
	tab4 = (int*) malloc(sizeof *tab4);
	int i;
	printf("\n");
	for (i=0; i<size; i++)
	{
		(tab1[i]>=0) ? (tab4[i]=tab2[i]) : (tab4[i]=tab3[i]);
		printf("%d\n", tab4[i]);
	}
}

int main()
{
	int *tab1, *tab2, *tab3;
	tab1 = (int*) malloc(sizeof *tab1);
	tab2 = (int*) malloc(sizeof *tab2);
	tab3 = (int*) malloc(sizeof *tab3);
	
	int i = 0;
	int size;
	
	printf("Podaj rozmiar tablic: ");
	scanf("%d", &size);
	
	printf("\nTablica 1\n");
	for (i=0; i<size; i++)
	{
		scanf("%d", &tab1[i]);
	}
	
	printf("\nTablica 2\n");
	for (i=0; i<size; i++)
	{
		scanf("%d", &tab2[i]);
	}

	printf("\nTablica 3\n");
	for (i=0; i<size; i++)
	{
		scanf("%d", &tab3[i]);
	}	
	
	przenos(tab1, tab2, tab3, size);

}

