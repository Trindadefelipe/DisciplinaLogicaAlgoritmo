#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, delta, x1, x2, xv, yv;

    printf("=== 38. Analise de Funcao Quadratica (ax^2 + bx + c) ===\n");
    printf("Digite a, b e c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a == 0) {
        printf("Erro: 'a' deve ser diferente de 0 para ser quadratica.\n");
        return 1;
    }

    //Concavidade
    if (a > 0) printf("- Concavidade: Para CIMA (possui ponto MINIMO)\n");
    else printf("- Concavidade: Para BAIXO (possui ponto MAXIMO)\n");

    //Vértice
    delta = pow(b, 2) - 4 * a * c;
    xv = -b / (2 * a);
    yv = -delta / (4 * a);
    printf("- Vertice: (%.2lf, %.2lf)\n", xv, yv);

    //Raízes
    if (delta > 0) {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("- Raizes: x1 = %.2lf, x2 = %.2lf\n", x1, x2);
    } else if (delta == 0) {
        x1 = -b / (2 * a);
        printf("- Raiz Unica: x = %.2lf\n", x1);
    } else {
        printf("- Nao existem raizes reais (Delta negativo).\n");
    }

    return 0;
}