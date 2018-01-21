void input (double **tab, int m, int n)
{	
	int i, j;
	
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			scanf("%lf", &tab[i][j]);
		}
	}
}

int suma_najw (double **tab, int m, int n)
{
	int i, j;
	double suma = 0;
	double maks = 0;
	int indeks;
	
	for(i=0; i<m; i++)
	{
		suma = 0;
		for(j=0; j<n; j++)
		{
			suma += tab[i][j];
		}	
		(suma > maks) ? (maks = suma) && (indeks = i) : (maks = maks);
		
		
	}
	
	return indeks + 1;
}

int main()
{
	int m = 4;
	int n = 3;
	
	double **tab = malloc (m * sizeof(double**));
	
	int i, j, k;
	
	for(i=0; i<m; i++)
	{
		tab[i] = malloc (n * sizeof(double*));
	}
	
	input(tab, m, n);

	printf("\nTABLICA:\n\n");

	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("%lf\t", tab[i][j]);
		}
		printf("\n");
	}
	
	
	
	int wynik = suma_najw(tab, m, n);
	
	printf("\nWiersz: %d", wynik);
	
	return 0;
	
}
