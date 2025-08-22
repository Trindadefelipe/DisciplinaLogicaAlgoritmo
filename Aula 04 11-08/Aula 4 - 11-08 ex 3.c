#include <stdio.h>

int main()
{
    float preco;
    float desconto;
    float valor_final;

    printf("insira o valor de seu produto para aplicar o desconto \n");
    scanf("%f", &preco);

    desconto = (preco*9)/100;
    valor_final = preco-desconto;
    printf("Você recebeu um desconto, e o valor do produto ficou: %.2f", valor_final);

    return 0;
}
