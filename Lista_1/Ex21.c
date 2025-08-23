#include <stdio.h>

int main (){

  int num1;

  printf("Digite um numero inteiro: ");
  scanf("%d", &num1);

  printf("O numero digitado foi: %d\n", num1);
  printf("Agora usaremos incrementos e decrementos com esse numero!\n");
  printf("Valor do numero pos incremento na mesma linha: %d\n", num1++);
  printf("Valor do numero pos incremento na proxima linha: %d\n", num1);
  printf("Valor do numero pre incremento na mesma linha: %d\n", ++num1);
  printf("Valor do numero pos incremento diminuindo na mesma linha: %d\n", num1--);
  printf("Valor do numero pos incremento diminuindo na proxima linha: %d\n", num1);
  printf("Valor do numero pre incremento diminuindo na mesma linha: %d\n", --num1);

  return 0;
}