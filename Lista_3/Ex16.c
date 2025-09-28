#include <stdio.h>

int main(){
  int senha;

  do{
    printf("Digite a senha: \n");
    scanf("%d", &senha);

    if(senha != 1234){
      printf("Senha invalida!\n");
    }
  }while (senha != 1234);

  printf("Acesso Liberado!");


  return 0;

}
