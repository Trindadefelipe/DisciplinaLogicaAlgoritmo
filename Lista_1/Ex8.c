#include <stdio.h>

int main(){
    float compra, pagamento, troco;

    printf("Digite o valor da compra:");
    scanf("%f", &compra);
    printf("Digite o valor recebido do cliente:");
    scanf("%f", &pagamento);

    troco = pagamento-compra;

    printf("Seu troco foi de:R$%.2f .", troco);

    return 0;


}