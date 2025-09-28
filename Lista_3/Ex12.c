#include <stdio.h>

int main(){

  float num1, num2, calculo;
  int decisao;
  while(decisao != 3){
    printf("O que voce deseja fazer?\n1- Somar\n2- Subtrair\n3- Sair\n");
    scanf("%d", &decisao);

    if(decisao == 1){
      printf("Digite um numero: ");
      scanf("%f", &num1);
      printf("Digite um numero: ");
      scanf("%f", &num2);

      calculo = num1 + num2;

      printf("A soma dos numero digitado vale: %.2f \n", calculo);
    } else if (decisao == 2){
      printf("Digite um numero: ");
      scanf("%f", &num1);
      printf("Digite um numero: ");
      scanf("%f", &num2);

      calculo = num1 - num2;

      printf("A subtracao dos numero digitado vale: %.2f \n", calculo);
    }
  }


  return 0;

}
