#include<stdio.h>
#include<stdlib.h>

long long int zmiana (char napis[256])
{
	return atoll(napis);
}

int main()
{
	long long int liczba;
	char napis[256];

	gets(napis);

	liczba = zmiana(napis);

	printf("%lld", liczba);
	
	return 0;
	
}

