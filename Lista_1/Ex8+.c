#include <stdio.h>

int main(){
    float compra, pagamento, troco;

    printf("Digite o valor da compra:");
    scanf("%f", &compra);
    printf("Digite o valor recebido do cliente:");
    scanf("%f", &pagamento);

    if (pagamento<compra){
        printf("Valor insuficiente! Ainda faltam R$%.2f Reais",compra-pagamento);
    } else {
    troco = pagamento-compra;

    printf("Seu troco foi de:R$%.2f .", troco);
    }
    return 0;


}