#include <stdio.h>

int main()
{
    float distancia, centimetros, quilometro, milimetros;

    printf("Digite uma distancia em metros para converte-la!\n");
    scanf("%f", &distancia);

    centimetros = distancia*100;
    quilometro = distancia/1000;
    milimetros = distancia*1000;

    printf("A medida recebida em metros equivale:\n Centimetros:%.2f\n Milimetros:%.2f\n Quilometros:%.2f", centimetros, milimetros, quilometro);
    return 0;
}
