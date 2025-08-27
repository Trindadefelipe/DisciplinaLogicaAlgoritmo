#include <stdio.h>
#include <math.h>

int main(){
  double num1, calculo;

  printf("Digite um numero:");
  scanf("%lf", &num1);

  calculo = pow(2, num1);

  printf("%.2lf", calculo);

  return 0;
}