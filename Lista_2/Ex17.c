#include <stdio.h>
#include <math.h>

int main(){

  double a, b, c, delta, resultado1, resultado2;

  printf("Digite o valor de 'a' da equação do segundo grau onde seu formato é 'ax²+bx+c=0':\n ");
  scanf("%lf", &a);
  printf("Digite o valor de 'b' da equação do segundo grau onde seu formato é 'ax²+bx+c=0':\n ");
  scanf("%lf", &b);
  printf("Digite o valor de 'c' da equação do segundo grau onde seu formato é 'ax²+bx+c=0':\n ");
  scanf("%lf", &c);

  delta = (pow(b,2)) - (4*a*c);

  if (delta > 0)
  {
    resultado1 = (-b + (sqrt(delta))) / 2 * a;
    resultado2 = (-b - (sqrt(delta))) / 2 * a;
    printf("Sua equacao possui duas raizes reais e distintas respectivamente: %.2lf, %2.lf", resultado1, resultado2);
  } else if (delta == 0)
  {
    resultado1 = (-b + (sqrt(delta))) / 2 * a;
    resultado2 = (-b - (sqrt(delta))) / 2 * a;
    printf("Sua equacao possui uma raiz real ou duas raizes reais e identicas respectivamente: %.2lf, %.2lf", resultado1, resultado2);
  } else 
  {
    printf("Delta < 0, portanto nao ha raizes! ");
  }


  return 0; 

}