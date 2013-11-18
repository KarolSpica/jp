#include<stdio.h>
int tab[5];
int licznik;
int rozmiar = 5;
void sortowanie(int table[], int size);
main()
{
	for( licznik = 0; licznik < 5; licznik++)
	{
		printf("\nPodaj %d element tabeli: ", licznik + 1);
		scanf("%d",&tab[licznik]);		 
	}
	for( licznik = 0; licznik < 5; licznik++)
	{
		printf("\ntab[%d] = %d", licznik, tab[licznik]);
	}
	sortowanie(tab,rozmiar);
	for(licznik = 0; licznik < 5; licznik++)
	{
		printf("\ntab[%d] = %d", licznik, tab[licznik]);
	}
	return 0;
}
void sortowanie(int table[], int size)
{
	int i, j, temp;
	for( i = 0; i < size; i++)
	{
		for (j=0; j < size-1-i; j++)
		{
			if(table[j] > table[j+1])
			{
				temp = table[j+1];
				table[j+1] = table[j];
				table[j] = temp;
			}
		}
	}
}
