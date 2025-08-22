#include <stdio.h>

int main()
{
    float raio;
    float area; 
    float perimetro;

    printf("Digite o número equivalente ao raio de um circulo para receber área e perímetro!\n");
    scanf("%f", &raio);

    area = (3.14*raio*raio);
    perimetro = (2*3.14*raio);

    printf("Sua área é:%.2f\n",area);
    printf("Seu perímetro é:%.2f\n", perimetro);

    return 0;
}
