#include <stdio.h>

int main(void) {

  for(int i=0,a=0;i<=1000;i++,a+=i)
  {
    if(i==1000)
     {
      printf("resultado eh %i", a); 
     }
  }
    
  
  return 0;
}