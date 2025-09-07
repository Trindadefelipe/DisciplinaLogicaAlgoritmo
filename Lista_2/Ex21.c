#include <stdio.h>

int main(){
  float graus;

  printf("Digite a temperatura em Celsius: ");
  scanf("%f", &graus);

  if(graus >= -273 && graus <= 1000)
  {
    graus = (graus * 1.8) + 32;
    printf("Convertendo para Fahrenheit temos: %.2f °F", graus); 
  } else {
    printf("Erro! Tente Novamente!");
  }


  return 0;

}
