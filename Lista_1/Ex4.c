#include <stdio.h>

int main(){

    float altura;
    float comprimento;
    float area;

    printf("Digite a altura do triangulo:");
    scanf("%f", &altura);
    printf("Digite o comprimento do triangulo:");
    scanf("%f", &comprimento);

    area = (altura*comprimento)/2;

    printf("Seu triangulo tem uma area de:%.2f", area);

    return 0;
}