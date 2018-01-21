#include<stdio.h>
#include<stdlib.h>

void *mem_reserv()
{	
	float *x;
	x = (float*) malloc(sizeof *x);
	scanf("%f", x);
	
	printf("%f\n", *x);
	printf("%p\n", x);

	
	
}

int main()
{
	mem_reserv();
	
	return 0;
	
}
	
