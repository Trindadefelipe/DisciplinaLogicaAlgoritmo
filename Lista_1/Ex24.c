#include <stdio.h>

int main(){
  float valor, cotacao_dolar, dolares;

  printf("Digite o valor em reais: ");
  scanf("%f", &valor);
  printf("Digite a cotacao do dolar a ser utilizada: ");
  scanf("%f", &cotacao_dolar);

  dolares = valor/cotacao_dolar;

  printf("O valor adicionado equivale a $%.2f Dolares!", dolares);

  return 0;
  
}