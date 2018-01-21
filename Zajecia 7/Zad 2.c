#include<stdio.h>

int maks (int *wsk_a, int *wsk_b)
{
	int a, b;
	*wsk_a = &a;
	*wsk_b = &b;
	a = 100;
	b = 2000;
	return (a>b)?*wsk_a:*wsk_b;
}

int main()
{
	int *wsk_a, *wsk_b;
	int wynik = maks(*wsk_a, *wsk_b);
	printf("%p", wynik);
}
	
