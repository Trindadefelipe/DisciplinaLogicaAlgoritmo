#include <stdio.h>

int main()
{
    float altura, largura, comprimento, volume;

    printf("Digite a altura da caixa d'água em metros: ");
    scanf("%f", &altura);
    printf("Digite a largura da caixa d'água em metros: ");
    scanf("%f", &largura);
    printf("Digite o comprimento da caixa d'água em metros: ");
    scanf("%f", &comprimento);

    volume = (altura*largura*comprimento)*1000;

    printf("O volume da caixa d'agua é de:%.2f", volume);
    return 0;
}
