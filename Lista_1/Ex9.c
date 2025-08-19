#include <stdio.h>

int main() {
    float distancia, combustivel, consumo;

    printf("Digite a distancia em Km percorrida:");
    scanf("%f", &distancia);
    printf("Digite a quantidade em Litros gasta para concluir o trajeto:");
    scanf("%f", &combustivel);

    consumo = distancia/combustivel;

    printf("A media de consumo do seu veiculo é de: %.2f Km por Litro", consumo);
}