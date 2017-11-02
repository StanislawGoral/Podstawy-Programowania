#include <stdio.h>


int funkcja(float cena, float podw, float kryt)
{
	int i=0;
	podw = podw * 0.01;
	
    while(cena<kryt)
	{
		cena = cena + cena * podw;
		i++;
	}
	
	return i;
}

int main()
{
	float cena, podw, kryt, podwproc;
	
	do
	{
	printf("\nPodaj cene produktu:\n\n");
	scanf("%f", &cena);
	}
	while(cena<=0);
		
	do
	{
	printf("\nPodaj wartosc procentowa podwyzki (0-100):\n\n");
	scanf("%f", &podw);
	}
	while(podw<0 || podw>100);
	
	printf("\nPodaj wartosc krytyczna:\n\n");
	scanf("%f", &kryt);
	
	int wynik = funkcja(cena, podw, kryt);
	
	printf("\nProdukt o cenie %.2f przekracza wartosc krytyczna %.2f\nprzy >> %d << podwyz. o wartosci procentowej %.2f%%.\n", cena, kryt, wynik, podw );
	
	return 0;
	
	
}
