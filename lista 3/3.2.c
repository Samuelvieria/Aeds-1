#include <stdio.h>

int main(void) {
  int  n = 1;
  int soma = 0;
  float media;
  int i = 0;
  
  while(n!=0){
    printf("digite um numero: \n ");
    scanf("%i",&n);

    //if(n>0)
    //{
    soma+=n;
    i++;
    //}
  }
  media = (float)soma/(i-1);

  printf("valor eh %f",media);  

  return 0;
}