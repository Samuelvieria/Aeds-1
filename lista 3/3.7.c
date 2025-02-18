#include <stdio.h>

int main(void) {

  int numero;
  float porcente;
  int inte1=0,inte2=0,inte3=0,inte4=0;
  int contador=0;
  int porcent1,porcent2,porcent3,porcent4;

 while(1)
   {
    printf("digite um valor: \n");
    scanf("%i",&numero);
     contador++;
    if (numero == 0  )
{
    printf("porecentagem eh:\n%i\n%i\n%i\n%i\n",porcent1,porcent2,porcent3,porcent4);
  return 0;
}
      

  if(numero>0 && numero<26)
  {
   inte1++;
  }
 else if(numero>25 && numero<51)
  {
  inte2++;
  }
 else if(numero>50 && numero<76)
  {
  inte3++;
  }
 else if(numero>75 && numero<100)
  {
  inte4++;
  } else  {
   printf("valor n atende a condicao");
  contador--;}


 
     
     porcent1=100*inte1/contador;
     porcent2=100*inte2/contador;
     porcent3=100*inte3/contador;
     porcent4=100*inte4/contador;
}



  return 0;
}