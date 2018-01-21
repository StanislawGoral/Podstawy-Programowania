#include<stdio.h>
#include<stdlib.h>

void mem_free(double* x)
{
	x = (double*) malloc(sizeof *x);
	*x = 501.242324;
	printf("Wartosc x: %f\n", *x);
	printf("Adres x: %p\n", x);
	printf("\n");
	free(x);
	x = NULL;
	(x == NULL) ? printf("PAMIEC WOLNA") : printf("PAMIEC PELNA");


}

int main()
{
	
	double* lb;
	
	mem_free(lb);
	
	
	return 0;
}
