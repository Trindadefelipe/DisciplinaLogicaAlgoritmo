#include <stdio.h>

int main()
{
    float distancia, vel_media, tempo;

    printf("Digite a distancia que irá percorrer em quilometros: ");
    scanf("%f", &distancia);
    printf("Digite a velocidade média em km/h para percorrer o caminho: ");
    scanf("%f", &vel_media);

    tempo = (distancia/vel_media)*60;

    printf("O tempo gasto para percorrer essa distancia nesta velocidade é de: %.2f Minutos", tempo);


    return 0;
}
