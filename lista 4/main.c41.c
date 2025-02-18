#include <stdio.h>

int main(void) {
int numeros[10]={0};
int maior=0;
 
for(int i=0; i<10; i++){
printf("digite um numeros");
scanf("%i", &numeros[i]);
  if(maior<numeros[i]){
    maior=numeros[i];
  }
}
  printf("maior %i",maior);

  return 0;
}