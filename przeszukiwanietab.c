#include<stdio.h>
#define roz 20
int tab[roz];
int licznik;
int maks(int x[], int y);
main()
{
	for(licznik = 0; licznik < roz; licznik++)
	{ 
		printf("Podaj wartosc z zakesu od -32000 do 32000\n");
		scanf("%d", &tab[licznik]);
	}
	printf("Najwieksza wartosc w tablicy to: %d\n", maks(tab, roz));
	return 0;
}
int maks(int x[], int y)
{
	int licz;
	int maksimum = -32000;
	for(licz = 0; licz < y; licz++)
	{
		if(x[licz] > maksimum)
		{
			maksimum = x[licz];
		}
	}
	return maksimum;
}
		
