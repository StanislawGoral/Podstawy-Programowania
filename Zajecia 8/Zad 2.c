#include<stdio.h>
#include<stdlib.h>

int zmiana (char napis[256])
{
	return atoi(napis);
}

int main()
{
	int liczba;
	char napis[256];

	gets(napis);

	liczba = zmiana(napis);

	printf("%d", liczba);
	
	return 0;
	
}

