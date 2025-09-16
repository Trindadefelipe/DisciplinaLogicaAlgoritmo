#include <stdio.h>
#include <math.h>

int main(){
  double raio, volume;

  printf("Digite o raio da circunferencia:");
  scanf("%lf", &raio);

  if(raio > 0){
    volume = (4.0/3.0) * M_PI * pow(raio, 3);
    printf("Volume e aproximadamente = %.2lf", volume);
  } else {
    printf("Raio Negativo!");
  }


  return 0;

}
