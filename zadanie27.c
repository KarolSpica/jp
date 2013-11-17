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
  if( tab[i]%=0)
    {
    printf("%d",tab[i]);
    }
	   
  return 0;
}
