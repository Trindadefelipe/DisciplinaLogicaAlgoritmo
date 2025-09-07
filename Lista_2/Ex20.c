#include <stdio.h>
#include <math.h>

int main(){
  double x1, y1, x2, y2, calculo, resultado;

  printf("Digite as coordenadas de um ponto 'X1,Y1': ");
  scanf("%lf", &x1);
  scanf("%lf", &y1);
  printf("Digite as coordenadas de outro ponto 'X2,Y2': ");
  scanf("%lf", &x2);
  scanf("%lf", &y2);

  calculo = pow ((x2-x1), 2) + pow ((y2-y1),2);
  resultado = sqrt(calculo);

  printf("A distancia entre as coordenadas digitadas é aproximadamente: %.2lf", resultado);


  return 0;

}
