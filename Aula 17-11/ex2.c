#include <stdio.h>

float soma(float num1, float num2){
    return (num1 + num2);
}
float multiplicacao(float num1, float num2){
    return (num1 * num2);
}
float subtracao(float num1, float num2){
    return (num1 - num2);
}
float divisao(float num1, float num2){
    return (num1 / num2);
}

int main()
{
    int opcao;
    float num1, num2, calculo;

    printf("===CALCULADORA===\n");
    printf("DIGITE A OPERACAO DESEJADA!\n");
    printf("1 - ADICAO\n");
    printf("2 - SUBTRACAO\n");
    printf("3 - MULTIPLICACAO\n");
    printf("4 - DIVISAO\n");
    scanf("%d", &opcao);

    while (opcao < 1 || opcao > 4)
    {
        printf("Opcao inválida!\n");
        printf("DIGITE A OPERACAO DESEJADA!\n");
        printf("1 - ADICAO\n");
        printf("2 - SUBTRACAO\n");
        printf("3 - MULTIPLICACAO\n");
        printf("4 - DIVISAO\n");
        scanf("%d", &opcao);
    }

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);
    printf("Digite o segundo numero: ");
    scanf("%f", &num2);
    
    switch (opcao)
    {
    case 1:
        calculo = soma(num1, num2);
        printf("Resultado da adicao: %.1f", calculo);
        break;
    case 2:
        calculo = subtracao(num1, num2);
        printf("Resultado da subtracao: %.1f", calculo);
        break;
    case 3:
        calculo = multiplicacao(num1, num2);
        printf("Resultado da multiplicacao: %.1f", calculo);
        break;
    case 4:
        calculo = divisao(num1, num2);
        printf("Resultado da divisao: %.1f", calculo);
        break;
    
    default:
        break;
    }
    

    return 0;
}