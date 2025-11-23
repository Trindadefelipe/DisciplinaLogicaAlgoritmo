#include <stdio.h>
#include <math.h>

int main() {
    double x1, y1, x2, y2, x3, y3;
    double a, b, c, s, area, perimetro;

    printf("=== 43. Analise Geometrica (Triangulos) ===\n");

    printf("Ponto 1 (x y): "); scanf("%lf %lf", &x1, &y1);
    printf("Ponto 2 (x y): "); scanf("%lf %lf", &x2, &y2);
    printf("Ponto 3 (x y): "); scanf("%lf %lf", &x3, &y3);

    //distância entre pontos (tamanho dos lados)
    // d = sqrt((x2-x1)^2 + (y2-y1)^2)
    a = sqrt(pow(x2-x1, 2) + pow(y2-y1, 2)); // Lado entre P1 e P2
    b = sqrt(pow(x3-x2, 2) + pow(y3-y2, 2)); // Lado entre P2 e P3
    c = sqrt(pow(x1-x3, 2) + pow(y1-y3, 2)); // Lado entre P3 e P1

    printf("\nLados calculados: a=%.2lf, b=%.2lf, c=%.2lf\n", a, b, c);

    //Verifica se forma triângulo
    if (a + b > c && a + c > b && b + c > a) {
        perimetro = a + b + c;
        s = perimetro / 2.0; // Semiperímetro

        // Fórmula de Heron para Área
        area = sqrt(s * (s - a) * (s - b) * (s - c));

        printf("--- Resultados ---\n");
        printf("Perimetro: %.2lf\n", perimetro);
        printf("Area (Heron): %.2lf\n", area);

        // Classificação
        printf("Tipo: ");
        if (a == b && b == c) printf("Equilatero (3 lados iguais)\n");
        else if (a != b && b != c && a != c) printf("Escaleno (3 lados diferentes)\n");
        else printf("Isosceles (2 lados iguais)\n");

    } else {
        printf("\nERRO: Os pontos informados NAO formam um triangulo (sao colineares ou invalidos).\n");
    }

    return 0;
}