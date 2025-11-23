#include <stdio.h>

int main() {
    double n1, n2, n3, n4, media;
    int freq, trabalhos;

    printf("=== 42. Sistema de Avaliacao ===\n");
    printf("Digite as 4 notas (0-10): ");
    scanf("%lf %lf %lf %lf", &n1, &n2, &n3, &n4);
    
    printf("Frequencia do aluno (%%): ");
    scanf("%d", &freq);
    
    printf("Quantidade de trabalhos entregues (0-10): ");
    scanf("%d", &trabalhos);

    // Média Ponderada (Pesos: 1, 2, 3, 4 -> Soma = 10)
    media = (n1*1 + n2*2 + n3*3 + n4*4) / 10.0;

    printf("\nMedia Ponderada Final: %.2lf\n", media);
    printf("Situacao: ");

    // Critérios de aprovação
    if (freq < 75) {
        printf("REPROVADO (Falta de frequencia)\n");
    } else {
        // tem frequência, avalia o resto
        if (media >= 7.0 && trabalhos >= 5) {
            printf("APROVADO\n");
        } else if (media >= 4.0) {
            printf("EM EXAME (Recuperacao necessaria)\n");
            if (trabalhos == 10) {
                printf("OBS: Aluno entregou todos os trabalhos, considerar ponto extra.\n");
            }
        } else {
            printf("REPROVADO (Nota insuficiente)\n");
        }
    }

    return 0;
}