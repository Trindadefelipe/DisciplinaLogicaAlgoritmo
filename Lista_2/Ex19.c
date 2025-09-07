#include <stdio.h>

int main(){
  float num1, num2, num3;

  printf("Digite um numero:\n ");
  scanf("%f", &num1);
  printf("Digite um numero:\n ");
  scanf("%f", &num2);
  printf("Digite um numero:\n ");
  scanf("%f", &num3);

  if (num1 > num2 && num1 > num3)
  {
    printf("%.2f", num1);
  }
  if (num2 > num1 && num2 > num3)
  {
    printf("%.2f", num2);
  }
  if(num3 > num1 && num3 > num2)
  {
    printf("%.2f", num3);
  }

  return 0;

}
