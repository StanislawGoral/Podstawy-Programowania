#include<stdio.h>
#include<stdlib.h>

double zmiana (char napis[256])
{
	return atof(napis);
}

int main()
{
	double liczba;
	char napis[256];

	gets(napis);

	liczba = zmiana(napis);

	printf("%f", liczba);
	return 0;
}


