#include<stdio.h>
float MojaSzkola[4][5];
int licz1, licz2;
main()
{
	for(licz1 = 0; licz1 < 4; licz1++)
	{
		for(licz2 = 0; licz2 < 5; licz2++)
		{
			printf("\nWpisz srednia ocen %d-ego ucznia %d-ej klasy ", licz2 +1, licz1 + 1);
			scanf("%f", &MojaSzkola[licz1][licz2]);
		}
	}
	for(licz1 = 0; licz1 < 4; licz1++)
	{
		for(licz2 = 0; licz2 < 5; licz2++)
		{
			printf("\nUczen %d z klasy %d ma srednia %f", licz2 +1, licz1 +1, MojaSzkola[licz1][licz2]);
		}
	}
	return 0;
		}
	
