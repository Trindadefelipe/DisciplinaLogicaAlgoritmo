#include <stdio.h>
#include <math.h>

int main() {
    double x, y, r, theta;
    const double PI = 3.14159265;

    printf("=== 41. Cartesianas (x,y) para Polares (r, theta) ===\n");
    printf("Digite a coordenada X: ");
    scanf("%lf", &x);
    printf("Digite a coordenada Y: ");
    scanf("%lf", &y);

    r = sqrt(pow(x, 2) + pow(y, 2));

    theta = atan2(y, x); 

    printf("\n--- Resultado ---\n");
    printf("Raio (r): %.2lf\n", r);
    printf("Angulo: %.2lf radianos (%.2lf graus)\n", theta, theta * (180.0/PI));

    printf("Localizacao: ");
    if (x > 0 && y > 0) printf("1o Quadrante\n");
    else if (x < 0 && y > 0) printf("2o Quadrante\n");
    else if (x < 0 && y < 0) printf("3o Quadrante\n");
    else if (x > 0 && y < 0) printf("4o Quadrante\n");
    else printf("Sobre um dos eixos\n");

    return 0;
}