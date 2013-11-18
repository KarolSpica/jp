#include<stdio.h>
#define roz 10
int tab1[roz];
int tab2[roz];
int licznik;
int sumuj(int x[], int y[], int z);
main()
{
	for(licznik = 0; licznik < 10; licznik++)
	{
		printf("Podaj %d element pierwszej tablicy\n", licznik + 1);
		scanf("%d", &tab1[licznik]);
		printf("Podaj %d element drugiej tablicy\n", licznik + 1);
		scanf("%d", &tab2[licznik]);
	}
	printf("Suma elementow tablic to %d", sumuj(tab1, tab2, roz));
	return 0;
}
int sumuj(int x[], int y[], int z)
{
	int licz;
	int suma = 0;
	for(licz = 0; licz < z; licz++)
	{
		suma += x[licz] + y [licz];
	}
	return suma;
}
