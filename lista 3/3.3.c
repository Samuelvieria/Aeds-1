#include <stdio.h>

int main(void) {
int termo;
int prime= 0, sec=1;
int aux;
  printf("digite ate que numero vc quer \n ");
  scanf("%i",&termo);

  printf("\n0\n1\n");
  for(int i=0;i<termo;i++){
    aux=prime+sec;
    prime = sec;
    sec = aux;

    printf("%i\n",aux);
  }
  return 0;
}