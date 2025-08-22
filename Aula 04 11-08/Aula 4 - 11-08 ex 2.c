#include <stdio.h>

int main()
{
int num1;
float quadrado;

    printf("Digite um número que te mostrarei quanto fica elevado ao quadrado!\n");
    scanf("%d", &num1);

    quadrado = (num1*num1);

    printf("Seu número elevado ao quadrado é:%.2f", quadrado);

    return 0;
}
