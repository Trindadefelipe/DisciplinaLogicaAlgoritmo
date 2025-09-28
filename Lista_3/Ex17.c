#include <stdio.h>

int main(){
  float nota1;

  do{
    printf("Digite sua nota: \n");
    scanf("%f", &nota1);

    if (nota1 < 0 || nota1 > 10){
      printf("Nota invalida! \nDigite novamente!");
    }
  } while(nota1 < 0 || nota1 > 10);

  return 0;

}
