#include <stdio.h>

int main(){
  float distancia1, distancia2, tempo1, tempo2, vm1, vm2, vmt;

  printf("Digite a primeira distancia percorrida: ");
  scanf("%f", &distancia1);
  printf("Digite o tempo para percorrer a primeira distancia: ");
  scanf("%f", &tempo1);
  printf("Digite a segunda distancia percorrida: ");
  scanf("%f", &distancia2);
  printf("Digite o tempo para percorrer a segunda distancia: ");
  scanf("%f", &tempo2);

  vm1 = distancia1 / tempo1;
  vm2 = distancia2 / tempo2;
  vmt = (distancia1 + distancia2)/(tempo1+tempo2);

  printf("A velocidade media do primeiro percurso foi de: %.2f m/s \n", vm1);
  printf("A velocidade media do segundo percurso foi de: %.2f m/s \n", vm2);
  printf("A velocidade media total percurso foi de: %.2f m/s", vmt);

  return 0;
}