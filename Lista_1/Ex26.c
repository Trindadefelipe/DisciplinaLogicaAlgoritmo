#include <stdio.h>

int main(){

  float coef_a, coef_b, valor_x;

  printf("Digite o valor do coeficiente A: ");
  scanf("%f", &coef_a);
  printf("Digite o valor do coeficiente B: ");
  scanf("%f", &coef_b);

  valor_x = (-coef_b/coef_a);

  printf("O resultado da funcao do primeiro grau com os valores adicionados é: %.2f", valor_x);

  return 0;
}