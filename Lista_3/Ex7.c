#include <stdio.h>
#include <math.h>

int main()
{
    float nota;
    float soma = 0;

    for (int i = 1; i <= 5; i++)
    {
        printf("Digite sua nota: \n");
        scanf("%f", &nota);

        soma = soma + nota;
    }
    
    soma = soma / 5;
    printf("A media das notas é: %.1f", soma);

    return 0;
}
