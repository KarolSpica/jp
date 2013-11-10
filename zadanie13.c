#include  <stdio.h>
int main(){
  int i;
  int liczba;
  int suma = 0;
  int k = 0;
  printf("Podaj liczbę\n");
  scanf("%d",&liczba);
  for (i = 1; i <= liczba ; i++)
      {
	k=i*i;
	suma = suma +k;
  }
    printf("%d\n", suma);

  return 0;
}

