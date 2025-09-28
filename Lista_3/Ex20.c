#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  int num1, num_aleatorio;
  int contador = 0;
  srand(time(NULL));

  do{
    
    num_aleatorio = rand() % 11; 
    
    printf("Adivinhe o numero de 1 a 10: \n");
    scanf("%d", &num1);

    contador++;
    
  }while (num1 != num_aleatorio);

  printf("Parabens voce acertou! \nNumero %d \nForam necessaria %d tentativas", num1, contador);


  return 0;

}
