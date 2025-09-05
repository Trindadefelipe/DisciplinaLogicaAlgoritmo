#include <stdio.h>
#include <math.h>

int main()
{
    double num1;
    int expoente = 2;

    printf("Digite um numero inteiro: ");
    scanf("%lf", &num1);

    if (num1 >= 10)
    {
        num1 = pow(num1, expoente);
        printf("O Numero digitado ao quadrado é: %.2lf", num1);
    } else if (num1 < 10 && num1 > 0 )
    {
        num1 = sqrt (num1);
        printf("O numero digitado calculado a raiz quadrada é: %.2lf", num1);

    }
    
    
    return 0;
}
