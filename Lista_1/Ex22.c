#include <stdio.h>

int main(){
  float compra, valor_parcela;
  int parcela;

  printf("Digite o valor total da compra: ");
  scanf("%f", &compra);
  printf("Digite o numero de parcelas que serao feitas: ");
  scanf("%d", &parcela);

  valor_parcela = compra/parcela;

  printf("A compra feita em %d parcela(s) fica com o valor de R$%.2f sem juros!", parcela, valor_parcela);

  return 0;
}