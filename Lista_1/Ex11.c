#include <stdio.h>

int main()
{
        float num1, num2, soma, divisao, multiplicacao, subtracao;

        printf("Digite dois numeros para resolvermos eles em contas de +, -, * e /!\n ");
        scanf("%f", &num1);
        scanf("%f", &num2);

        soma = num1+num2;
        divisao = num1/num2;
        multiplicacao = num1*num2;
        subtracao = num1-num2;

        printf("Os resultados são:\n soma: %.2f\n subtracao: %.2f\n multiplicacao: %.2f\n divisão: %.2f", soma, subtracao, multiplicacao, divisao);
    return 0;
}
