#include <stdio.h>

int main()
{
	int x1, x2, y1, y2, absx, absy;
	int pole;
	
	printf("Podaj wspolrzedna x1:\n\n");
	scanf("%d", &x1);
	
	printf("\nPodaj wspolrzedna y1:\n\n");
	scanf("%d", &y1);
	
	printf("\nPodaj wspolrzedna x2:\n\n");
	scanf("%d", &x2);
	
	printf("\nPodaj wspolrzedna y2:\n\n");
	scanf("%d", &y2);
	
	absx = (x1 - x2);
	if(absx<0)
	absx = absx * (-1);
	
	absy = (y1 -y2);
	if(absy<0)
	absy = absy * (-1);
	
	pole = absx * absy;
	
	printf("\nPole prostokata wynosi o przekatnej w punktach (%d,%d) i (%d,%d) wynosi: %d.\n\n", x1, y1, x2, y2, pole);
	
	return 0;
}
