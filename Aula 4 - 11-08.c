#include <stdio.h>

int main()
{
    float num1;
    float num2;
    float media;

    printf("Digite dois números inteiros que irei calcular a média para você!\n");
    scanf("%f", &num1);
    scanf("%f", &num2);

    media = (num1+num2)/2;

    printf("A média dos números adicionados é:%.2f", media );

    return 0;
}
