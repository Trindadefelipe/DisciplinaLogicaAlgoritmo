#include <stdio.h>

int main() {
    int pontos[8];
    int id_jogadores[8];
    int i, j, temp_pt, temp_id;

    printf("=== Problema 10: Ranking ===\n");
    
    for(i=0; i<8; i++) {
        id_jogadores[i] = i + 1;
        printf("Pontuacao do Jogador %d: ", id_jogadores[i]);
        scanf("%d", &pontos[i]);
    }

    for(i=0; i<8; i++) {
        for(j=0; j < 7 - i; j++) {
            if(pontos[j] < pontos[j+1]) {

                temp_pt = pontos[j];
                pontos[j] = pontos[j+1];
                pontos[j+1] = temp_pt;

                temp_id = id_jogadores[j];
                id_jogadores[j] = id_jogadores[j+1];
                id_jogadores[j+1] = temp_id;
            }
        }
    }

    printf("\n=== RANKING FINAL ===\n");
    
    printf("1o Lugar: Jogador %d com %d pts (CAMPEAO)\n", id_jogadores[0], pontos[0]);
    printf("2o Lugar: Jogador %d com %d pts\n", id_jogadores[1], pontos[1]);
    printf("3o Lugar: Jogador %d com %d pts\n", id_jogadores[2], pontos[2]);

    printf("\n--- Restante ---\n");
    for(i=3; i<8; i++) {
        printf("%do Lugar: Jogador %d com %d pts\n", i+1, id_jogadores[i], pontos[i]);
    }

    printf("\nDiferenca do 1o para o ultimo: %d pontos\n", pontos[0] - pontos[7]);

    return 0;
}