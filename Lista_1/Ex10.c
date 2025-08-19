#include <stdio.h>

int main(){
    float preco, desconto, preco_final;

    printf("Digite o valor do produto desejado: ");
    scanf("%f", &preco);
    printf("Digite o valor do desconto a ser aplicado: ");
    scanf("%f", &desconto);

    preco_final = preco-(desconto/100*preco);
    printf("Seu produto ficou por R$%.2f!", preco_final);

return 0;
}