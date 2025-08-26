#include <stdio.h>
#include <math.h>

int main()
{
    double num1;
    double valor;

    printf("Digite um número negativo: \n");
    scanf("%lf", &num1);

    valor = fabs(num1);

    printf("O valor absoluto do número digitado é: %.2lf", valor);
    
    return 0;
}

