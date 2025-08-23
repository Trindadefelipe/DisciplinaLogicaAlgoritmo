#include <stdio.h>

int main(){

  float tensao, corrente, potencia;

  printf("Digite a tensao em volts:");
  scanf("%f", &tensao);
  printf("Digite a corrente em amperes:");
  scanf("%f", &corrente);

  potencia = (tensao*corrente);

  printf("A potencia do aparelho é de: %.0f Watts", potencia);
  
  return 0;
}