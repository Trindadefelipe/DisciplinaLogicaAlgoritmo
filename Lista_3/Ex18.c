#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h> // Para a função toupper()

int main() {
    int numero_jogador, numero_computador, soma;
    char escolha_jogador; 
    char jogar_novamente;

    // Semeia o gerador de números aleatórios UMA VEZ, no início do programa.
    srand(time(NULL));

    do {
        // --- Entrada do Jogador ---
        printf("==============================\n");
        printf("       JOGO PAR OU IMPAR      \n");
        printf("==============================\n");
        printf("Escolha (P)ar ou (I)mpar: ");
        scanf(" %c", &escolha_jogador);

        // Converte a escolha para maiúscula para facilitar a verificação
        escolha_jogador = toupper(escolha_jogador);

        while (escolha_jogador != 'P' && escolha_jogador != 'I') {
            printf("Escolha invalida! Por favor, digite 'P' para Par ou 'I' para Impar: ");
            scanf(" %c", &escolha_jogador);
            escolha_jogador = toupper(escolha_jogador);
        }

        printf("Digite um número entre 0 e 10: ");
        scanf("%d", &numero_jogador);

        // Gera um número aleatório para o computador (de 0 a 10)
        numero_computador = rand() % 11; //pega o resto da divisão desse número por 11. O resultado disso é sempre um número no intervalo de 0 a 10.
        
        soma = numero_jogador + numero_computador;

        printf("\n");
        printf("Você jogou: %d\n", numero_jogador);
        printf("O computador jogou: %d\n", numero_computador);
        printf("A soma é: %d\n", soma);
        
        if (soma % 2 == 0) {
            printf("O resultado é PAR!\n\n");
            if (escolha_jogador == 'P') {
                printf(">>> VOCÊ VENCEU! <<<\n");
            } else {
                printf(">>> VOCÊ PERDEU! <<<\n");
            }
        } else {
            printf("O resultado é ÍMPAR!\n\n");
            if (escolha_jogador == 'I') {
                printf(">>> VOCÊ VENCEU! <<<\n");
            } else {
                printf(">>> VOCÊ PERDEU! <<<\n");
            }
        }

        printf("\n------------------------------\n");
        printf("Deseja jogar novamente? (S/N): ");
        scanf(" %c", &jogar_novamente);
        jogar_novamente = toupper(jogar_novamente);
        printf("\n");

    } while (jogar_novamente == 'S');

    printf("Obrigado por jogar!\n");

    return 0;
}