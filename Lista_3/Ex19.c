#include <stdio.h>

int main(){
  int decisao;
  float num1, num2, calculo;

  do{
    printf("============\n");
    printf("CALCULADORA\n");
    printf("============\n");

    printf("Digite a operacao desejada: \n1 - SOMA\n2 - SUBTRACAO\n3 - DIVISAO\n4 - MULTIPLICACAO\n5 - SAIR\n");
    scanf("%d", &decisao);

    while(decisao<1 || decisao > 5){
      printf("valor invalido!\n");
      printf("Digite a operação desejada: \n1 - SOMA\n2 - SUBTRACAO\n3 - DIVISAO\n4 - MULTIPLICACAO\n5 - SAIR\n");
      scanf("%d", &decisao);
    }

    if (decisao == 1){
      printf("Digite um numero: \n");
      scanf("%f", &num1);
      printf("Digite um numero: \n");
      scanf("%f", &num2);

      calculo = num1 + num2; 

      printf("A soma dos numero digitados foi: %.2f\n", calculo);
    }

    if (decisao == 2){
      printf("Digite um numero: \n");
      scanf("%f", &num1);
      printf("Digite um numero: \n");
      scanf("%f", &num2);

      calculo = num1 - num2; 

      printf("A subtracao dos numero digitados foi: %.2f\n", calculo);
    }

    if (decisao == 3){
      printf("Digite um numero: \n");
      scanf("%f", &num1);
      printf("Digite um numero: \n");
      scanf("%f", &num2);
      
      while(num2 == 0){
        printf("Não existe divisão por '0', digite outro numero!\n");
        printf("Digite um numero: \n");
        scanf("%f", &num2);
      }
      calculo = num1 / num2; 

      printf("A soma dos numero digitados foi: %.2f\n", calculo);
    }

    if (decisao == 4){
      printf("Digite um numero: \n");
      scanf("%f", &num1);
      printf("Digite um numero: \n");
      scanf("%f", &num2);

      calculo = num1 * num2; 

      printf("A multiplicacao dos numero digitados foi: %.2f\n", calculo);
    }

  } while(decisao != 5);


  return 0;

}
