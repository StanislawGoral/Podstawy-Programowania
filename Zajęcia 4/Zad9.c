#include <stdio.h>
#include <stdbool.h>>


int max(float a, float b, float c)
{
	if(a>b && a>c)
	return a;
	else if(b>a && b>c)
	return b;
	else
	return c;	
}

int mid(float a, float b, float c)
{
	if(a>b && a<c || a>c && a<b)
	return a;
	else if (b>a && b<c || b>c && b<a)
	return b;
	else
	return c;
}

int min(float a, float b, float c)
{
	return a + b + c - max(a, b, c) - mid (a, b, c);
}

int main()
{
	float a, b, c;
	bool prostokatny;

	
	printf("Podaj bok a:\n\n");
	scanf("%f", &a);
	
	printf("\nPodaj bok b:\n\n"); 
	scanf("%f", &b);
	
	printf("\nPodaj bok c:\n\n");
	scanf("%f", &c);
	
	float mini = min(a, b, c);
	float midi = mid(a, b, c);
	float maxi = max(a, b, c);
	
	printf("\nmin = %.2f  mid = %.2f  max = %.2f\n", mini, midi, maxi);
	
	if(min(a, b, c)*min(a, b, c) + mid(a, b ,c)*mid(a, b, c)==max(a, b, c)*max(a, b, c))
	{
		prostokatny = true;
	}
	else
	{
		prostokatny = false;
	}
	
	switch (prostokatny)
	{
		case true:
			printf("\nTrojkat jest prostokatny.");
			break;
			
		case false:
			printf("\nTrojkat NIE jest prostokatny.");	
	}
}
