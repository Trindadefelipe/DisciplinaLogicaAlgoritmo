#include <stdio.h>
#include <math.h>

int main()
{
    double angulo, radianos;

    printf("Digite o ângulo em graus: ");
    scanf("%lf", &angulo);

    radianos = angulo * 3.14 / 180;

    printf("O angulo inserido em radianos equivale: %lf rad\n", radianos);
    printf("O Seno de %.2lf rad é %.2lf", radianos, sin(radianos));

    return 0;
}
