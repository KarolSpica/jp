#include <stdio.h>
int main(){
  int tab[5];
  int i;
  int pomoc;
  for (i = 0; i <= 4; i = i + 1){
    printf("Podaj element tablic numer %d: \n", i);
    scanf("%d", &tab[i]);
  }
  pomoc = tab[0];
  tab[0]=tab[4];
  tab[4]=pomoc;
  for(i = 0; i <= 4; i++){
    printf("%d\n", tab[i]);
      }
 return 0;
}
