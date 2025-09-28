#include <stdio.h>

int main(){
  int num1;

  printf("Digite um numero:\n");
  scanf("%d", &num1);

  while(num1 < 1 || num1 > 10){
    printf("Digite um numero:\n");
    scanf("%d", &num1);
  }
  
  printf("numero valido!");
  return 0;

}
