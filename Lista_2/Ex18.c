#include <stdio.h>
#include <math.h>

int main(){
  float peso, altura, resultado;

  printf("Calculadora de IMC!\n");
  printf("\n Digite seu peso(kg): ");
  scanf("%f", &peso);
  printf("Digite sua altura(M):  ");
  scanf("%f", &altura);

  resultado = peso / (altura*altura);

  if (resultado < 18.5)
  {
    printf("Abaixo do peso!\n Valor imc: %.2f", resultado);
  }
  if(resultado >= 18.5 && resultado <= 24.9) 
  {
    printf("Peso normal!\n Valor imc: %.2f", resultado);
  }
  
  if (resultado >= 25 && resultado <= 29.9)
  {
    printf("Sobrepeso!\n Valor imc: %.2f", resultado);
  }
  if(resultado >= 30) 
  {
    printf("Obeso!\n Valor imc: %.2f", resultado);
  }


  return 0;

}