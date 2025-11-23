#include <stdio.h>

int main() {
    double tempos[12];
    double soma = 0, media, melhor, pior;
    int i, indice_melhor = 0, indice_pior = 0, contador_melhor_media = 0;

    printf("=== Problema 4: Desempenho Atleta ===\n");
    printf("Digite os tempos das 12 corridas (min):\n");

    for(i = 0; i < 12; i++) {
        printf("Corrida %d: ", i + 1);
        scanf("%lf", &tempos[i]);
        soma += tempos[i];
    }

    media = soma / 12.0;
    melhor = tempos[0];
    pior = tempos[0];

    
    for(i = 0; i < 12; i++) {
        
        if(tempos[i] < melhor) {
            melhor = tempos[i];
            indice_melhor = i;
        }
        
        if(tempos[i] > pior) {
            pior = tempos[i];
            indice_pior = i;
        }
        
        if(tempos[i] < media) {
            contador_melhor_media++;
        }
    }

    printf("\n=== ANALISE DE DESEMPENHO ===\n");
    printf("Tempo medio: %.1lf min\n", media);
    printf("Melhor tempo: %.1lf min (Corrida %d)\n", melhor, indice_melhor + 1);
    printf("Pior tempo: %.1lf min (Corrida %d)\n", pior, indice_pior + 1);
    printf("Variacao (Pior - Melhor): %.1lf min\n", pior - melhor);
    printf("Corridas abaixo da media (boas): %d\n", contador_melhor_media);

    if(tempos[9] < media && tempos[10] < media && tempos[11] < media) {
        printf("Status: Atleta em evolucao! (Ultimas 3 corridas abaixo da media)\n");
    } else {
        printf("Status: Atleta estavel ou oscilando.\n");
    }

    return 0;
}