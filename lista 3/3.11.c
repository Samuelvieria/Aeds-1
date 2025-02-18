#include <stdio.h>
#include <math.h>

int main(void) {
  int x,n;
  float ln=0.0;
 printf("digite o valor de x e n : \n ");
  scanf("%i%i",&x,&n);

  for(int i=1;i<=n;i++)
  {
    ln += -pow(-1,i)*pow(-1+x,i)/(float)i;
  }
  printf("o resultado eh: \n %f",ln);
  return 0;
}