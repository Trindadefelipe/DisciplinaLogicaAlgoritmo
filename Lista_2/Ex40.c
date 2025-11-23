#include <stdio.h>

int main() {
    double valor_bem, entrada, valor_financiado, taxa_juros, valor_parcela, total_final;
    int parcelas;

    printf("=== 40. Calculo de Financiamento ===\n");
    printf("Valor do bem: R$ ");
    scanf("%lf", &valor_bem);
    printf("Valor da entrada: R$ ");
    scanf("%lf", &entrada);
    printf("Numero de parcelas desejadas: ");
    scanf("%d", &parcelas);

    valor_financiado = valor_bem - entrada;
    
    //taxa baseada na quantidade de parcelas
    if (parcelas <= 5) {
        taxa_juros = 0.0;     
    } else if (parcelas <= 12) {
        taxa_juros = 0.05;    al
    } else if (parcelas <= 24) {
        taxa_juros = 0.15;    
    } else {
        taxa_juros = 0.30;    
    }

    double valor_juros = valor_financiado * taxa_juros;
    total_final = entrada + valor_financiado + valor_juros;
    valor_parcela = (valor_financiado + valor_juros) / parcelas;

    printf("\n--- Detalhes do Financiamento ---\n");
    printf("Valor Financiado: R$ %.2lf\n", valor_financiado);
    printf("Taxa de Juros Aplicada: %.0lf%%\n", taxa_juros * 100);
    printf("Valor da Parcela (%dx): R$ %.2lf\n", parcelas, valor_parcela);
    printf("Custo Total (com juros): R$ %.2lf\n", total_final);

    return 0;
}