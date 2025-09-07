#include <stdio.h>

int main(){
  float salario;

  printf("Digite seu salario: ");
  scanf("%f", &salario); 

  if(salario <= 1000)
  {
    salario = (salario * 0.2) + salario;
    printf("Voce recebeu um aumento de 20%%! \n Valor atualizado: R$%.2f", salario);
  } else if (salario > 1000 && salario <= 2000)
  {
    salario = (salario * 0.15) + salario;
    printf("Voce recebeu um aumento de 15%%! \n Valor atualizado: R$%.2f", salario);
  } else 
  {
    salario = (salario * 0.10) + salario;
    printf("Voce recebeu um aumento de 10%%! \n Valor atualizado: R$%.2f", salario);
  }

return 0;

}
