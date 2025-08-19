#include <stdio.h>

int main() {

    int num1, num2, soma;


    printf("Digite dois números inteiros para calcula-los:\n");
    scanf("%d", &num1);
    scanf("%d", &num2);

    soma = num1+num2;

    printf("Resultado:%d", soma);

    return 0;


}