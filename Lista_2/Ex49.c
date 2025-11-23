#include <stdio.h>

int main() {
    double salario_bruto, base_calculo, imposto_devido, salario_liquido;
    double gastos_medicos, gastos_educacao;
    int dependentes;
    
    // Valores de dedução (exemplo didático)
    const double DEDUCAO_DEP = 189.59; 
    
    printf("=== 49. Calculadora de Imposto de Renda ===\n");
    printf("Salario Bruto Mensal: R$ ");
    scanf("%lf", &salario_bruto);
    
    printf("Numero de dependentes: ");
    scanf("%d", &dependentes);
    
    printf("Gastos Medicos (mensal medio): R$ ");
    scanf("%lf", &gastos_medicos);
    
    printf("Gastos Educacao (mensal medio): R$ ");
    scanf("%lf", &gastos_educacao);

    // 1. Calcular a Base de Cálculo
    // O imposto incide sobre o que sobra depois das despesas dedutíveis
    base_calculo = salario_bruto - (dependentes * DEDUCAO_DEP) - gastos_medicos - gastos_educacao;

    // Proteção para base negativa
    if (base_calculo < 0) base_calculo = 0;

    printf("\nBase de Calculo: R$ %.2lf\n", base_calculo);

    // 2. Cálculo do Imposto (Lógica Progressiva simplificada - Tabela 2024 aprox)
    // Faixas: Até 2259 (isento), até 2826 (7.5%), até 3751 (15%), até 4664 (22.5%), acima (27.5%)
    
    if (base_calculo <= 2259.20) {
        imposto_devido = 0.0;
        printf("Faixa: ISENTO\n");
    } 
    else if (base_calculo <= 2826.65) {
        imposto_devido = (base_calculo * 0.075) - 169.44; // 169.44 é a parcela a deduzir da faixa
        printf("Faixa: 7.5%%\n");
    } 
    else if (base_calculo <= 3751.05) {
        imposto_devido = (base_calculo * 0.15) - 381.44;
        printf("Faixa: 15%%\n");
    } 
    else if (base_calculo <= 4664.68) {
        imposto_devido = (base_calculo * 0.225) - 662.77;
        printf("Faixa: 22.5%%\n");
    } 
    else {
        imposto_devido = (base_calculo * 0.275) - 896.00;
        printf("Faixa: 27.5%%\n");
    }

    // Garantir que imposto não seja negativo por erro de conta
    if (imposto_devido < 0) imposto_devido = 0;

    salario_liquido = salario_bruto - imposto_devido;

    printf("\n--- Resultado Final ---\n");
    printf("Imposto a Pagar: R$ %.2lf\n", imposto_devido);
    printf("Salario Liquido: R$ %.2lf\n", salario_liquido);
    printf("Aliquota Efetiva: %.2lf%%\n", (imposto_devido / salario_bruto) * 100);

    return 0;
}