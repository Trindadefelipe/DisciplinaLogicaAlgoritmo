#include <stdio.h>
#include <math.h>

int main(){
    double num1;

    printf("Digite um numero positivo para que seja calculado seu logaritmo natural: ");
    scanf("%lf", &num1);

    while (num1<=0)
    {
        printf("O numero digitado não é positivo, digite um numero positivo: ");
        scanf("%lf", &num1);
    }

    num1 = log10(num1);

    printf("Calculando o log do numero digitado temos: %.2lf", num1);

    return 0;
    
}