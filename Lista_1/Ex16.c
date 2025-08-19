#include <stdio.h>

int main()
{
    float capital, juros, juros_simples;
    int tempo;

    printf("Vamos calcular os juros simples? Digite o capital inicial:");
    scanf("%f", &capital);
    printf("Digite o valor dos jutos:");
    scanf("%f", &juros);
    printf("Digite o prazo em meses:");
    scanf("%d", &tempo);

    juros_simples = capital*(juros/100)*tempo;

    printf("Seu juros simples ficou no valor de:%.2f", juros_simples);
    return 0;
}
