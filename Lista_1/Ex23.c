#include <stdio.h>

int main(){
  float base, altura, area;

  printf("Digite o valor da Base do triangulo: ");
  scanf("%f", &base);
  printf("Digite o valor da Altura do triangulo: ");
  scanf("%f", &altura);

  area = (base*altura)/2;

  printf("Area do triangulo:%.2f\n", area);
  printf("E essa e a area do triangulo aumentada em 1 unidade:%2.f", ++area);

  return 0;

}