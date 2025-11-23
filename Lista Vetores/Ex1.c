#include <stdio.h>

int main() {
    int votos[5];
    int i, total = 0;
    int maior_voto = 0, indice_vencedor = 0;

    printf("=== Problema 1: Votacao Eletronica ===\n");

    printf("Digite os votos de cada candidato:\n");
    for (i = 0; i < 5; i++) {
        printf("Candidato %d: ", i + 1);
        scanf("%d", &votos[i]);
        
        total += votos[i];

        if (votos[i] > maior_voto) {
            maior_voto = votos[i];
            indice_vencedor = i;
        }
    }

    printf("\n=== Resultado ===\n");
    printf("Total de votos: %d\n", total);
    printf("Candidato vencedor: Candidato %d com %d votos\n", indice_vencedor + 1, maior_voto);

    return 0;
}