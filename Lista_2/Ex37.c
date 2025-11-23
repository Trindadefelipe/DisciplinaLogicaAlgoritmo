#include <stdio.h>
#include <math.h> 

int main() {
    
    double a1, b1, c1; 
    double a2, b2, c2; 
    double D, Dx, Dy; 
    double x, y;       

    // Título
    printf("=== Resolucao de Sistema 2x2 por Cramer ===\n\n");

    printf("Digite os coeficientes da 1a equacao (a1 b1 c1):\n");
    printf("Exemplo: para '2x + 3y = 5', digite: 2 3 5\n> ");
    scanf("%lf %lf %lf", &a1, &b1, &c1);

    printf("\nDigite os coeficientes da 2a equacao (a2 b2 c2):\n");
    printf("Exemplo: para '4x - y = 2', digite: 4 -1 2\n> ");
    scanf("%lf %lf %lf", &a2, &b2, &c2);

    D = (a1 * b2) - (a2 * b1);

    if (fabs(D) < 0.000001) {
        printf("\n[!] O determinante e igual a zero (D = 0).\n");
        printf("O sistema nao possui solucao unica (e indeterminado ou impossivel).\n");
    } else {

        Dx = (c1 * b2) - (c2 * b1);
        Dy = (a1 * c2) - (a2 * c1);

        x = Dx / D;
        y = Dy / D;

        printf("\n=== Resultados ===\n");
        printf("Determinante (D): %.2lf\n", D);
        printf("Determinante X (Dx): %.2lf\n", Dx);
        printf("Determinante Y (Dy): %.2lf\n", Dy);
        printf("-------------------\n");
        printf("Solucao: x = %.2lf, y = %.2lf\n", x, y);
    }

    return 0;
}