#include <stdio.h>
#include <math.h>
int dlugosc(double x1, double x2, double y1, double y2)
{
	return sqrt(pow((x2 - x1),2) + pow((y2 - y1),2));
}

int main()
{
	double x1, x2, y1, y2;
	
	printf("\nPodaj x1:\n\n");
	scanf("%lf", &x1);
	
	printf("\nPodaj y1:\n\n");
	scanf("%lf", &y1);
	
	printf("\nPodaj x2:\n\n");
	scanf("%lf", &x2);
	
	printf("\nPodaj y2:\n\n");
	scanf("%lf", &y2);
	
	double dlug = dlugosc(x1,x2,y1,y2);
	
	printf("\nDlugosc odcinka wynosi %.2lf.", dlug);
	
	return 0;
	
}
