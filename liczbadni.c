#include<stdio.h>
int a,b;
main() 
{ 
	int tab[2][12] = {{31,28,31,30,31,30,31,30,31,30,31,30}, {31,29,30,31,30,31,30,31,30,31,30,31}};
	for (a = 0; a < 2; a++)
	{
		for(b = 0; b < 12; b++)
		{
			if( a == 0 )
			{
				printf("Miesiac %d roku nieprzestepnego ma %d dni\n", b + 1, tab[a][b]);
			}
			else
			{
				printf("Miesiac %d roku przestepnego ma %d dni\n", b+1, tab[a][b]);
			}
		}
	}
	return 0;
}
