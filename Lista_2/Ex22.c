#include <stdio.h>

int main(){
  int idade;

  printf("Digite sua idade: ");
  scanf("%d", &idade);

  if(idade >= 5 && idade<= 7)
  {
    printf("Classificado para categoria Infantil!");
  }
  if(idade >= 8 && idade<= 10)
  {
    printf("Classificado para categoria Juvejil!");
  }
  if(idade >= 11 && idade<= 15)
  {
    printf("Classificado para categoria Adolescente!");
  }
  if(idade >= 16 && idade<= 30)
  {
    printf("Classificado para categoria Adulto!");
  }
  if(idade > 30)
  {
    printf("Classificado para categoria Senior!");
  }
  return 0;

}
