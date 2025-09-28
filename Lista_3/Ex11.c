#include <stdio.h>

int main(){

  int num1;
  int contador = 0;

  printf("digite um numero inteiro: ");
  scanf("%d", &num1);

  while(num1 != 0){
    num1 = num1 / 10;
    contador++;
  }

  printf("O numero digitado tem %d digitos!", contador);


  return 0;

}
