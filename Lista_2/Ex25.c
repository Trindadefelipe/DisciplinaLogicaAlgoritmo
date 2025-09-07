#include <stdio.h>
#include <math.h>
#define PI 3.141592653589793 // definindo PI como uma macro

int main(){
  double raio, calculo;

  printf("Digite o valor do raio da circunferencia: ");
  scanf("%lf", &raio);

  if(raio > 0)
  {
    calculo = pow(raio, 2) * PI;

    printf("O valor da area e de aproximadamente: %.2lf", calculo);
  } else 
  {
    printf("Tente novamente e digite um valor positivo!");
  }
  
return 0;

}
