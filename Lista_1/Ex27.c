#include <stdio.h>

int main(){

  float num1, num2;

  printf("Digite um numero: ");
  scanf("%f", &num1);
  printf("Digite outro numero: ");
  scanf("%f", &num2);

  printf("Aplicando += ao primeiro numero usando o segundo numero fica:%.2f \n", num1+=num2);
  printf("Aplicando -= ao primeiro numero usando o segundo numero fica:%.2f \n", num1-=num2);
  printf("Aplicando *= ao primeiro numero usando o segundo numero fica:%.2f \n", num1*=num2);
  printf("Aplicando /= ao primeiro numero usando o segundo numero fica:%.2f \n", num1/=num2);

  return 0;

}