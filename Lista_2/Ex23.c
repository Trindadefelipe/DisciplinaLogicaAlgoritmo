#include <stdio.h>
#include <math.h>

int main(){
  double cateto1, cateto2, hipotenusa, calculo;

  printf("Digite o valor do primeiro cateto: ");
  scanf("%lf", &cateto1);
  printf("Digite o valor do primeiro cateto: ");
  scanf("%lf", &cateto2);

  if(cateto1 > 0 && cateto2 > 0)
  {
    cateto1 = pow(cateto1, 2);
    cateto2 = pow(cateto2, 2);
    calculo = cateto1 + cateto2;
    hipotenusa = sqrt(calculo);

    printf("O valor da hipotenusa é: %.2lf", hipotenusa);
  } else 
  {
    printf("Nao calculavel!");
  }


  return 0;

}
