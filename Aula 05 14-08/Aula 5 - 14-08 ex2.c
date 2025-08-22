#include <stdio.h>

int main()
{
    int num1; 
    int num2; 
    float soma;
    float multiplicação;
    float subtração;
    float divisão;
    float resto;

    printf("Digite 2 números que irei realizar alguns cálculos!\n");
    scanf("%d", &num1);
    scanf("%d", &num2);

    soma = num1+num2;
    multiplicação = num1*num2;
    subtração = num1-num2;
    divisão = num1/num2;
    resto = num1%num2;

    printf("A soma do 1° e 2° número é:%2.f\n", soma);
    printf("A multiplicação do 1° e 2° número é:%.2f\n", multiplicação);
    printf("A subtração do 1° e 2° número é:%.2f\n", subtração);  
    printf("A divisão do 1° e 2° número é:%.2f\n", divisão);
    printf("O resto da divisão do 1° e 2° número é:%.2f\n", resto);


    return 0;
}
