#include <stdio.h>
int main(){
  int tab[5];
  int i;
  for (i = 0; i <= 4; i = i + 1){
    printf("Podaj element tablic numer %d: \n", i);
    scanf("%d", &tab[i]);
  }

  for (i = 4; i >= 0; i = i - 1)
{
  printf("Tab[%d}= %d\n",i, tab[i]);
	   }
  return 0;
}
	   
