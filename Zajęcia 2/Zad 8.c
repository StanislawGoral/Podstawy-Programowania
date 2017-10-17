#include <stdio.h>
#include <stdbool.h>
int main() 

{
	int stala = 1;
	int dzialanie = 0;
	double a, b, cwiartka;
	bool cw1, cw2, cw3 ,cw4;
	
	//printf("       y ^\nII       |        I\n         |\n         |\n         |\n         |\n---------+---------\n         |          x\n         |\n         |\n         |\nIII      |       IV\n"); - pusty wykres

	while(stala == 1)
    {
	while(dzialanie == 0)
	{
	printf("WYKRES FUNKCJI LINIOWEJ\n\n");
	
	printf("Podaj wspolczynnik a:\n\n");
	scanf("%lf", &a);
	printf("\nPodaj wpsolczynnik b: \n\n");
	scanf("%lf", &b);
	
	printf("\nFUNKCJA: f(x) = %.2lf * x + %.2lf\n\n", a, b);
	dzialanie = 1;
	if(a == 0 && b == 0)
	{
		cw1 = false;
		cw2 = false;
		cw3 = false;
		cw4 = false;		
		
		printf("       y ^\nII       |        I\n         |\n         |\n         |\n         |\n=========+=========>\n         |          x\n         |\n         |\n         |\nIII      |       IV\n");
	}
	else if(a > 0 && b == 0)
	{
		cw1 = true;
		cw2 = false;
		cw3 = true;
		cw4 = false;		
		
		printf("       y ^\nII       |    /   I\n         |  f(x)\n         |  /\n         | /\n         |/\n---------+--------->\n        /|          x\n       / |\n      /  |\n     /   |\nIII /    |       IV\n");
	}
	else if(a < 0 && b == 0)
	{
		cw1 = false;
		cw2 = true;
		cw3 = false;
		cw4 = true;		
		
		printf("       y ^\nII  \\    |        I\n     \\   |\n      \\  |\n       \\ |\n        \\|\n---------+--------->\n         |\\         x\n         | \\\n         |  f(x))\n         |   \\\nIII      |    \\  IV\n");
	}
	else if(a == 0 && b > 0)
	{
		cw1 = true;
		cw2 = true;
		cw3 = false;
		cw4 = false;		
		
		printf("       y ^\nII       |        I\n         |\n         |\n_________|__f(x)___\n         |\n---------+--------->\n         |          x\n         |\n         |\n         |\nIII      |       IV\n");
	}
	else if(a > 0 && b > 0)
	{
		cw1 = true;
		cw2 = true;
		cw3 = true;
		cw4 = false;		
		
		printf("       y ^\nII       | /f(x)  I\n         |/\n         /\n        /|\n       / |\n------/--+--------->\n     /   |          x\n    /    |\n   /     |\n  /      |\nIII      |       IV\n");
	}
	else if(a < 0 && b > 0)
	{
		cw1 = true;
		cw2 = true;
		cw3 = false;
		cw4 = true;		
		
		printf("       y ^\nII     \\ |        I\n        \\|\n         \\\n         |\\\n         | \\\n---------+--\\------>\n         |   \\      x\n         |    \\\n         |     f(x)\n         |      \\\nIII      |       IV\n");
	}
	else if(a == 0 && b < 0)
	{
		cw1 = false;
		cw2 = false;
		cw3 = true;
		cw4 = true;	
		
		printf("       y ^\nII       |        I\n         |\n         |\n         |\n         |\n---------+--------->\n         |          x\n         |\n_________|__f(x)___\n         |\nIII      |       IV\n");	
	}
	else if(a > 0 && b < 0)
	{
		cw1 = true;
		cw2 = false;
		cw3 = true;
		cw4 = true;		
		
		printf("       y ^\nII       |      / I\n         |     /\n         |   f(x)\n         |   /\n         |  /\n---------+-/------->\n         |/         x\n         /\n        /|\n       / |\nIII   /  |       IV\n");
	}
	else if(a < 0 && b < 0)
	{
		cw1 = false;
		cw2 = true;
		cw3 = true;
		cw4 = true;		
		
		printf("       y ^\nII\\      |        I\n   \\     |\n   f(x)  |\n     \\   |\n      \\  |\n-------\\-+--------->\n        \\|          x\n         \\\n         |\\\n         | \\\nIII      |  \\   IV\n");
	}

	
	switch (cw1)
	{
		case true:
			
			printf("\nNalezy do I cwiartki.\n");
		
			break;
		case false:
			
			printf("\nNIE nalezy do I cwiartki.\n");
	}	
	
		switch (cw2)
	{
		case true:
			
			printf("\nNalezy do II cwiartki.\n");
		
			break;
		case false:
			
			printf("\nNIE nalezy do II cwiartki.\n");
	}	

		switch (cw3)
	{
		case true:
			
			printf("\nNalezy do III cwiartki.\n");
		
			break;
		case false:
			
			printf("\nNIE nalezy do III cwiartki.\n");
	}	
	
		switch (cw4)
	{
		case true:
			
			printf("\nNalezy do IV cwiartki.\n\n================================================================================\n\n");
		
			break;
		case false:
			
			printf("\nNIE nalezy do IV cwiartki.\n\n================================================================================\n\n");
	}	
}
dzialanie = 0;
}
	
	

	return 0;
}
