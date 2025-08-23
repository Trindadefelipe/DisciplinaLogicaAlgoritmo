#include <stdio.h>

int main(){

  float massa, volume, densidade;

  printf("Digite a massa do objeto em Kg: ");
  scanf("%f", &massa);
  printf("Digite o volume do objeto em M³: ");
  scanf("%f", &volume);

  densidade = massa/volume;

  printf("A densidade do objeto equivale aproximadamente: %.2f kg/m³", densidade);
  return 0;

}