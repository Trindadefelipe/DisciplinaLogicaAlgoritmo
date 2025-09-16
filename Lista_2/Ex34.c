#include <stdio.h>

int main(){
  float nota1, nota2, nota3, mediaponderada;
  int peso1, peso2, peso3;

  printf("Digite a nota da prova 1: \n");
  scanf("%f", &nota1);
  printf("Digite o peso da prova 1: \n");
  scanf("%d", &peso1);
  printf("Digite a nota da prova 2: \n");
  scanf("%f", &nota2);
  printf("Digite o peso da prova 2: \n");
  scanf("%d", &peso2);
  printf("Digite a nota da prova 3: \n");
  scanf("%f", &nota3);
  printf("Digite o peso da prova 3: \n");
  scanf("%d", &peso3);

  mediaponderada = (nota1*peso1) + (nota2*peso2) + (nota3*peso3) / (peso1+peso2+peso3);

  if(mediaponderada >= 7){
    printf("Aprovado!");
  } else if (mediaponderada >= 5 && mediaponderada <= 6.9 ){
    printf("Recuperacao!");
  } else {
    printf("Reprovado!");
  }
  return 0;

}
