#include <stdio.h>
#include <math.h>

int main() {
    double capital, taxa, tempo;
    double montante_simples, montante_composto;

    printf("=== 44. Simulador de Investimento ===\n");
    printf("Capital Inicial (R$): ");
    scanf("%lf", &capital);
    printf("Taxa de Juros Mensal (em %%): ");
    scanf("%lf", &taxa);
    printf("Tempo (meses): ");
    scanf("%lf", &tempo);

    // Converter taxa percentual para decimal
    double i = taxa / 100.0;

    // Fórmulas
    montante_simples = capital * (1 + (i * tempo));
    montante_composto = capital * pow((1 + i), tempo);

    printf("\n--- Apos %.0f meses ---\n", tempo);
    printf("Juros Simples:   R$ %.2lf\n", montante_simples);
    printf("Juros Compostos: R$ %.2lf\n", montante_composto);

    double diferenca = montante_composto - montante_simples;
    printf("Diferenca de ganho: R$ %.2lf\n", diferenca);

    if (diferenca > 0) 
        printf("Melhor opcao: Juros Compostos (Exponencial)\n");
    else 
        printf("Empate ou curto prazo irrelevante.\n");

    return 0;
}