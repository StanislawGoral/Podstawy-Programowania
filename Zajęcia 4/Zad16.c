#include <stdio.h>
#include <math.h>

int main()
{
	int x, y; 
	float przeciw, przyp;
	
	printf("Podaj x:\n\n");
	scanf("%d", &x);
	
	printf("\nPodaj y:\n\n");
	scanf("%d", &y);
	
	przyp = sqrt(x*x);
	przeciw = sqrt((x*x) + (y*y));
	
	float cos = 1.0 * przyp/przeciw;
	
	printf("\nCosinus wynosi = %f", cos);

	return 0;
	
}
