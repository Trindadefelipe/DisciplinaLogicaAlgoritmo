#include <stdio.h>
#include <math.h>

int main(){
  float compra;

  printf("Digite o valor da sua compra: ");
  scanf("%f", &compra); 

  if(compra>=100){
    compra = compra - (compra * 0.10);
    printf("Voce recebeu 10%% de desconto!\nValor final: R$%.2f", compra);
  }
  else{
    printf("Valor a pagar: R$%.2f", compra);
  }

  return 0;

}