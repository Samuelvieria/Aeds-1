#include <stdio.h>

int main(void) {
  int numero,fatorial=1;

  printf("digite um numero: \n");
  scanf("%i",&numero);

for(int i=numero;i>1;i--){
  
fatorial=fatorial*i;
  }
printf("a fatorial eh: \n %i",fatorial);

  return 0;
}