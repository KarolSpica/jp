#include <stdio.h>
int main(){
  int tab[5] = {2};
  int i;
  int pow = 2;
    for( i = 1; i <=4; i = i++){
      tab[i] =tab[i-1]*pow; 
    }  

  for (i = 4; i >= 0; i = i - 1)
{
  printf("Tab[%d}= %d\n",i, tab[i]);
	   }
  return 0;
}
