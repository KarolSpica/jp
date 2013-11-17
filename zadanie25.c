#include <stdio.h>
int main(){
  int tab[5];
  int i;
    for( i = 0; i <=4; i = i++){
      printf("Podaj %d element tablic:\n", i);
      scanf("%d", &tab[i]);
    }  

  for (i = 0; i <= 4; i = i++)
{
  printf("Tab[%d}= %d\n",i, tab[i]);
	   }
  return 0;
}
	   
