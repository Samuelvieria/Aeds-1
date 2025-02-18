#include <stdio.h>

int main(void) {
  int numero;


  printf("digite um numero: \n");
  scanf("%i",&numero);

for(int i=2;i<numero;i++){
  if(numero % i==0){
   printf(" n eh primo");
    return 0;
     } else {
     printf("eh primo");
     return 0;

     }
}










  return 0;
}