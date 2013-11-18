#include<stdio.h>
float srednia_ucznia, suma_sr, sr_klasy;
int i;
int n;
float JakaSrednia(float x, int y);
main()
{
	float tab[10];
	suma_sr = 0;
	for( i = 0; i < 10; i++)
	{
		printf("Podaj srednia ucznia: \n");
		scanf("%f", &srednia_ucznia);
		if( (srednia_ucznia < 1) || (srednia_ucznia > 6))		
			exit(0);
		tab[i] = srednia_ucznia;
		suma_sr += srednia_ucznia;
	}
	printf("Srednie uczniow to: /n");
	for(n = 0; n < 10; n++)
	{
		printf("Uczen numer %d ma srednia: %f\n", n, tab[n]);
	sr_klasy = JakaSrednia(suma_sr, i);
	printf("Srednia ocen Twojej klasy wynosi: %f", sr_klasy);
	return 0;
}
}
float JakaSrednia(float x, int y)
{
	float z;
	z = x/y;
	return z;
}
	
