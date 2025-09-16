#include <stdio.h>

int main(){
  float ang1, ang2, ang3;

  printf("Digite o primeiro angulo:");
  scanf("%f", &ang1);
  printf("Digite o segundo angulo:");
  scanf("%f", &ang2);
  printf("Digite o terceiro angulo:");
  scanf("%f", &ang3);

  if (ang1 + ang2 + ang3 == 180) {
    if(ang1 < 90 && ang2 < 90 && ang3 < 90){
      printf("Triangulo acutangulo!");
    } else if (ang1 == 90 || ang2 == 90 || ang3 == 90){
      printf("Triangulo Retangulo!");
    } else if (ang1 > 90 || ang2 > 90 || ang3 > 90){
      printf("Triangulo Obtusangulo!");
    }
  } else {
    printf("Para ser um triangulo a soma dos angulos nao pode ultrapassar 180 graus!");
  }


  return 0;

}
