#include <stdio.h>

int main()
{
    float num1;
    float soma = 0;
    
    for (int i = 1; i <= 5; i++)
    {
        printf("Digite um numero: \n");
        scanf("%f", &num1);

        soma = soma + num1;

    }

    printf("Soma dos numeros digitados: %.0f", soma);
    
    return 0;
}
