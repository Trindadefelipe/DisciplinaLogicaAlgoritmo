#include <stdio.h>

int main()
{
    float peso, altura, imc;

    printf("Digite a altura em Metros e o peso em Quilos do paciente:\n");
    scanf("%f", &altura);
    scanf("%f", &peso);

    imc = peso/(altura*altura);

    printf ("O valor IMC do paciente é:%.2f", imc);
    return 0;
}

