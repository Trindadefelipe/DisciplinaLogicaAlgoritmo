#include <stdio.h>

float calculo(float peso, float altura){
    return (peso / (altura*altura));
}

int main(){

    float peso, altura, imc;

    printf("---Calculadora de IMC---\n");
    printf("Digite seu peso: ");
    scanf("%f", &peso);
    printf("Digite sua altura: ");
    scanf("%f", &altura);

    imc = calculo(peso, altura);

    if (imc < 18.5)
    {
        printf("Valor do IMC: %.2f \n", imc);
        printf("Abaixo do peso!");
    } else if (imc <= 18.5 && imc <= 25)
    {
        printf("Valor do IMC: %.2f \n", imc);
        printf("Peso normal!");
    } else if (imc < 25 && imc <= 30)
    {
        printf("Valor do IMC: %.2f \n", imc);
        printf("Acima do peso!");
    } else {
        printf("Valor do IMC: %.2f \n", imc);
        printf("Obeso!");
    }

    return 0;
}