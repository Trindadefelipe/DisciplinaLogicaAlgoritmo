#include <stdio.h>

int main()
{
    float lado1, lado2, lado3;

    printf("Digite a media do primeiro lado do triangulo: ");
    scanf("%f", &lado1);
    printf("Digite a media do segundo lado do triangulo: ");
    scanf("%f", &lado2);
    printf("Digite a media do terceiro lado do triangulo: ");
    scanf("%f", &lado3);

    if ((lado1 + lado2) > lado3 || (lado2 + lado3) > lado1 || (lado3 + lado1) > lado2)
    {
        printf("Triangulo válido!\n");

        if (lado1 == lado2 && lado2 == lado3 && lado3 == lado1)
        {
            printf("É um triangulo equilátero!");
        }
        else if (lado1 != lado2 && lado2 != lado3 && lado3 != lado1)
        {
            printf("É um triangulo escaleno!");
        }
        else
        {
            printf("É um triangulo isósceles!");
        }
    }

    return 0;
}
