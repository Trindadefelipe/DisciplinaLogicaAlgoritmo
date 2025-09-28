#include <stdio.h>

int main(){
  float num1;
  int contador = 0;

  printf("Digite um numero: ");
  scanf("%f", &num1);

  while(num1 > 1){
    num1 = num1 /2;
    contador++;
  }

  printf("O numero foi divido %d vezes para alcalcar o resultado menor que 1: %.2f", contador, num1);

  return 0;

}
