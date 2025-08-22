#include <stdio.h>

int main()
{
    float num1;
    float resultado;

    printf("Digite um numero real para saber qual o valor de 4%% do mesmo \n");
    scanf("%f", &num1);

    resultado = num1*0.04;

    printf("4%% do número digitado é: %.2f", resultado);

    return 0;
}
