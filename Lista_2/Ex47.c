#include <stdio.h>

int main() {
    double r1, r2, r3, req;
    int tipo_ligacao;

    printf("=== 47. Analise de Resistores ===\n");
    printf("Digite os valores dos 3 resistores (Ohms): ");
    scanf("%lf %lf %lf", &r1, &r2, &r3);
    
    printf("Tipo de Ligacao:\n1 - Serie\n2 - Paralelo\nEscolha: ");
    scanf("%d", &tipo_ligacao);

    if (tipo_ligacao == 1) {
        // Série: Soma simples
        req = r1 + r2 + r3;
        printf("\nLigacao em SERIE.\n");
    } else if (tipo_ligacao == 2) {
        // Paralelo: Inverso da soma dos inversos
        if (r1 == 0 || r2 == 0 || r3 == 0) {
            printf("Erro: Resistencia nao pode ser 0 em paralelo (curto-circuito ideal).\n");
            return 1;
        }
        req = 1.0 / ( (1.0/r1) + (1.0/r2) + (1.0/r3) );
        printf("\nLigacao em PARALELO.\n");
    } else {
        printf("Opcao invalida.\n");
        return 1;
    }

    printf("Resistencia Equivalente (Req): %.2lf Ohms\n", req);

    // Classificação de potência
    // Supondo uma tensão fixa de 12V para calcular potência dissipada P = V^2 / R
    double potencia = (12.0 * 12.0) / req;
    printf("Potencia dissipada (em 12V): %.2lf Watts -> ", potencia);

    if (potencia > 10.0) printf("ALTA POTENCIA (Cuidado)\n");
    else printf("BAIXA POTENCIA\n");

    return 0;
}