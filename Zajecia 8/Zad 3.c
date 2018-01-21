#include<stdio.h>
#include<stdlib.h>

long int zmiana (char napis[256])
{
	return atol(napis);
}

int main()
{
	long int liczba;
	char napis[256];

	gets(napis);

	liczba = zmiana(napis);

	printf("%ld", liczba);
	
	return 0;
	
}

