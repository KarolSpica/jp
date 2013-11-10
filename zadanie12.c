#include  <stdio.h>
int main(){
  int i;
  int liczba;
  int suma = 0;
  int k = 0;
  printf("Podaj liczbę\n");
  scanf("%d",&liczba);
  if ( liczba > 2){
  for (i = 1; i <= liczba ; i++)
      {
	k=i*i;
	suma = suma +k;
   }
 printf("%d\n", suma);
  }
  else 
    puts("Zła liczba");
  return 0;
}

