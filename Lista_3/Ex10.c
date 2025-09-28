#include <stdio.h>

int main(){
  float num1;
  float soma = 0;

  printf("Digite um numero: ");
  scanf("%f", &num1);

  while(num1 != 0){
    
    soma = soma + num1;
    printf("Digite um numero: ");
    scanf("%f", &num1);
    
  }

  printf("Soma dos numeros digitados = %.0f", soma);
  return 0;

}
