#include <stdio.h>
#include <math.h>

int main(){
  double base, expoente, resultado;

  printf("Digite a base para calcular a potencia: \n");
  scanf("%lf", &base);
  printf("Digite o expoente para calcular a potencia: \n");
  scanf("%lf", &expoente);

  if(base == 0 && expoente <= 0 ){
    printf("ERRO!");
  } else {
    resultado = pow (base, expoente);
    printf("Resultado: %.2lf", resultado);
  }


  return 0;

}
