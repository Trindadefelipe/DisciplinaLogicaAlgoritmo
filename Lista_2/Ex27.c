#include <stdio.h>

int main(){
  float num1, num2, resultado; 
  char operacao;

  printf("Digite um numero: \n");
  scanf("%f", &num1);
  printf("Digite a operação desejada '+, -, *, /': \n");
  scanf(" %c", &operacao);
  printf("Digite um numero: \n");
  scanf("%f", &num2);

  if(operacao == '+'){
    resultado = num1 + num2;
    printf("Resultado: %.2f", resultado);
  } else if(operacao == '-'){
    resultado = num1 - num2;
    printf("Resultado: %.2f", resultado);
  } else if(operacao == '*'){
    resultado = num1 * num2;
    printf("Resultado: %.2f", resultado);
  } else if(operacao == '/' && num2 == 0){
    printf("Não é possivel fazer divisão por 0!");
  } else {
    resultado = num1 / num2;
    printf("Resultado: %.2f", resultado);
  }


  return 0;

}
