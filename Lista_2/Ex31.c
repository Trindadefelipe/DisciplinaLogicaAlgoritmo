#include <stdio.h>

int main(){
  float peso, altura, imc;

  printf("Digite sua altura:");
  scanf("%f", &altura);
  printf("Digite seu peso:");
  scanf("%f", &peso);

  imc = peso / (altura*altura);

  if(imc <= 18.5){
    printf("Baixo Peso - IMC: %.2f", imc);
  } else if(imc >= 18.6 && imc <= 24.9 ){
    printf("Peso Normal - IMC: %.2f", imc);
  } else if(imc >= 25 && imc <= 29.9){
    printf("Sobre Peso - IMC: %.2f", imc);
  } else if(imc >= 30 && imc <= 34.9){
    printf("Obesidade Grau I - IMC: %.2f", imc);
  } else if(imc >= 35 && imc <= 39.9){
    printf("Obesidade Grau II - IMC: %.2f", imc);
  } else {
    printf("Obesidade Grau III - IMC: %.2f", imc);
  }


  return 0;

}
