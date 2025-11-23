#include <stdio.h>

int main() {
    double salario_atual, novo_salario, aumento_percentual;
    int anos_casa, avaliacao; // Avaliação de 1 a 5

    printf("=== 46. Progressao Salarial ===\n");
    printf("Salario Atual: R$ ");
    scanf("%lf", &salario_atual);
    printf("Anos de Empresa: ");
    scanf("%d", &anos_casa);
    printf("Avaliacao de Desempenho (1-Ruim a 5-Excelente): ");
    scanf("%d", &avaliacao);

    // Lógica de Negócio Aninhada
    if (anos_casa < 2) {
        // Novatos
        if (avaliacao >= 4) aumento_percentual = 0.05; // 5%
        else aumento_percentual = 0.0; // Sem aumento
    } 
    else if (anos_casa <= 5) {
        // Plenos
        if (avaliacao == 5) aumento_percentual = 0.15;      // 15%
        else if (avaliacao >= 3) aumento_percentual = 0.10; // 10%
        else aumento_percentual = 0.02;                     // 2% inflação
    } 
    else {
        // Veteranos (> 5 anos)
        if (avaliacao == 5) aumento_percentual = 0.20;      // 20%
        else if (avaliacao >= 3) aumento_percentual = 0.12; // 12%
        else aumento_percentual = 0.05;                     // 5% reconhecimento
    }

    novo_salario = salario_atual * (1 + aumento_percentual);

    printf("\n--- Resultado ---\n");
    printf("Aumento concedido: %.1lf%%\n", aumento_percentual * 100);
    printf("Salario Antigo: R$ %.2lf\n", salario_atual);
    printf("Novo Salario:   R$ %.2lf\n", novo_salario);

    return 0;
}