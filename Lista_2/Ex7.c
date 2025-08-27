#include <stdio.h>

int main(){
  float num1;

  printf("Digite um numero: ");
  scanf("%f", &num1);

  if(num1>=0){
    printf("Numero nao negativo!");
  }
  else{
    printf("Numero negativo!");
  }

  return 0;


}