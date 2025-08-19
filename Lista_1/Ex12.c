#include <stdio.h>

int main()
{
    float medida, area, perimetro;

    printf("Informe o lado do quadrado:");
    scanf("%f", &medida);

    area = medida*medida;
    perimetro = medida*4;

    printf("A area e o perimetro do seu quadrado são:\n Area:%.2f\n Perimetro:%.2f", area, perimetro);
    return 0;
}
