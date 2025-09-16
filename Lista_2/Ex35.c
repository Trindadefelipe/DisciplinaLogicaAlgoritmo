#include <stdio.h>

int main(){
  float salario, emprestimo;

  printf("Digite o valor do salario: \n");
  scanf("%f", &salario);
  printf("Digite o valor do emprestimo: \n");
  scanf("%f", &emprestimo);

  if(emprestimo <= (10*salario) && salario >= 1000){
    printf("Valor de emprestimo aprovado!");
  } else {
    printf("Emprestimo Negado!");
  }


  return 0;

}
