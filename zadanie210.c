#include <stdio.h>
int main(){
  int tab[5];
  int tab1[5];
  int i;
  for (i = 0; i <= 4; i = i + 1){
    printf("Podaj element tablic numer %d: \n", i);
    scanf("%d", &tab[i]);
  }
 for (i = 0; i <= 4; i++){
   tab1[i] = tab[i];
    printf("tab1[%d] = %d \n",i, tab1[i]);
      }
  return 0;
}
