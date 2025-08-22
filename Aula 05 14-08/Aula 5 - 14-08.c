#include <stdio.h>

int main()
{
    float num1, num2, num3;
    float resultado;

    printf("Tenho a expressao X=2*((a-c)/8)-b*5, digite três números reais e te darei o resultado! \n");
    scanf("%f", &num1);
    scanf("%f", &num2);
    scanf("%f", &num3);

    resultado = 2*((num1-num3)/8)-num2*5;

    printf("O resultado adicionando os numeros digitados na expressão foi de: %.2f", resultado);

    return 0;
}
