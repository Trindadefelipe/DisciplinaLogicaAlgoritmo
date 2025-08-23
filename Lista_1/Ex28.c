#include <stdio.h>

int main(){

  float altura, largura, azulejo_altura, azulejo_largura, area_parede, area_azulejo, resultado;

  printf("Digite a altura da parede em cm: ");
  scanf("%f", &altura);
  printf("Digite a altura da parede em cm: ");
  scanf("%f", &largura);
  printf("Digite a altura do azulejo em cm: ");
  scanf("%f", &azulejo_altura);
  printf("Digite a largura do azulejo em cm: ");
  scanf("%f", &azulejo_largura);

  area_parede = altura*largura;
  area_azulejo = azulejo_altura*azulejo_largura;
  resultado = area_parede/area_azulejo;

  printf("Serao necessarios no minimo %.2f azulejos para completar a parede!", resultado);

  return 0;
}