#include <stdio.h>
#include <math.h>

int main() {
    double n1, n2, n3, temp;
    double media_geo;

    printf("=== 48. Analise Numerica Avancada ===\n");
    printf("Digite 3 numeros reais: ");
    scanf("%lf %lf %lf", &n1, &n2, &n3);

    // Ordenação (Bubble Sort simples)
    // Objetivo: deixar n1 <= n2 <= n3
    if (n1 > n2) { temp = n1; n1 = n2; n2 = temp; }
    if (n1 > n3) { temp = n1; n1 = n3; n3 = temp; }
    if (n2 > n3) { temp = n2; n2 = n3; n3 = temp; }

    printf("\n--- Analise ---\n");
    printf("Menor: %.2lf\n", n1);
    printf("Maior: %.2lf\n", n3);

    // Verificação de PA (Progressão Aritmética)
    // Numa PA ordenada, a diferença entre o do meio e o primeiro é igual a do terceiro e o do meio.
    // Usamos uma margem de erro pequena (epsilon) para comparar floats
    if (fabs((n2 - n1) - (n3 - n2)) < 0.0001) {
        printf("Formam uma PA de razao %.2lf\n", n2 - n1);
    } else {
        printf("Nao formam PA.\n");
    }

    // Verificação de PG (Progressão Geométrica)
    // n2/n1 == n3/n2. Cuidado com divisão por zero.
    if (n1 != 0 && n2 != 0) {
        if (fabs((n2 / n1) - (n3 / n2)) < 0.0001) {
            printf("Formam uma PG de razao %.2lf\n", n2 / n1);
        } else {
            printf("Nao formam PG.\n");
        }
    }

    // Média Geométrica
    // Fórmula: Raiz Cúbica de (n1 * n2 * n3)
    double produto = n1 * n2 * n3;
    if (produto >= 0) {
        // pow(base, 1/3) é a raiz cúbica
        media_geo = pow(produto, 1.0/3.0); 
        printf("Media Geometrica: %.4lf\n", media_geo);
    } else {
        printf("Nao e possivel calcular Media Geometrica de produto negativo (nos Reais).\n");
    }

    return 0;
}