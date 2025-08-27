#include <stdio.h>
#include <math.h>

int main(){

  float num1, num2;

  printf("Digite um numero: ");
  scanf("%f", &num1);
  printf("Digite um numero: ");
  scanf("%f", &num2);

  if (num1>num2){
    printf("O primeiro numero digitado e maior! %.2f", num1);
  }
  else{
    printf("O segundo numero digitado e maior! %.2f", num2);
  }

  return 0;
}