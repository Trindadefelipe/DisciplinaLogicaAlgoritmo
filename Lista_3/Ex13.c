#include <stdio.h>

int main(){
  int num1, num_final = 0;

  while(num1 != -1){
    printf("Digite um numero:\n");
    scanf("%d", &num1);

    if (num1 > num_final){
      num_final = num1;
    }
  }

  printf("O maior numero digitado foi: %d", num_final);


  return 0;

}
