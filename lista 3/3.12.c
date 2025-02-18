#include <stdio.h>

int main(void) {
  double valor,entrada,amortizacao,juros,prest1,valorF;
  int meses;
  
  printf("digite o valor do imovel: \n" );
  scanf("%lf",&valor);
  if(valor<100000){
    printf("valor insufficient \n");
    return 0;
  }

   printf("digite a entrada do valor: \n" );
   scanf("%lf",&entrada);
  if(entrada<valor*0.20 || entrada>valor*0.75){
    printf("essa entrada n eh possivel");
    return 0;
  }
   printf("digite os meses: \n");
   scanf("%i",&meses);
   if(meses< 60 || meses>360){
    printf("valor invalido");
     return 0;
   }
  amortizacao=(valor-entrada)/meses;
  juros=0.1*valor/12;
  prest1=amortizacao+juros;
  valor += juros*meses;
  printf("valor total eh \n%.2lf\n\n",valor);
  
  printf("o valor da prestaocao eh \n%.2lf",prest1);

  
  
  


 


  



  
  return 0;
}