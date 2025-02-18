#include <stdio.h>

int main(void) {
  int n1,n2,maiorN,menorN;

  printf("digite dois numeros: \n");
  scanf("%i%i",&n1,&n2);

  if(n1>n2){
    maiorN=n1;
    menorN=n2;
  }else {
    maiorN=n2;
    menorN=n1;
  }
  if(maiorN%menorN==0){
    printf("n he primo");
  }else{
    printf("eh primo");  
  }
  
  return 0;
}