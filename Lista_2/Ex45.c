#include <stdio.h>
#include <math.h>

#define PI 3.14159265

int main() {
    int opcao;
    double num, res, expoente;

    printf("=== 45. Calculadora Cientifica ===\n");
    printf("1. Seno (sin)\n2. Cosseno (cos)\n3. Tangente (tan)\n");
    printf("4. Log Base 10 (log)\n5. Log Natural (ln)\n6. Raiz Quadrada (sqrt)\n7. Potencia (pow)\n");
    printf("Escolha: ");
    scanf("%d", &opcao);

    if (opcao >= 1 && opcao <= 6) {
        printf("Digite o numero: ");
        scanf("%lf", &num);
    } else if (opcao == 7) {
        printf("Digite a Base e o Expoente: ");
        scanf("%lf %lf", &num, &expoente);
    }

    switch(opcao) {
        case 1: // Seno (espera graus, converte para radianos)
            res = sin(num * PI / 180.0);
            printf("sin(%.2lf graus) = %.4lf\n", num, res);
            break;
        case 2: // Cosseno
            res = cos(num * PI / 180.0);
            printf("cos(%.2lf graus) = %.4lf\n", num, res);
            break;
        case 3: // Tangente
            if (fmod(num, 90.0) == 0 && fmod(num / 90.0, 2) != 0) // Validação simples de 90, 270...
                printf("Erro: Tangente indefinida para %.0lf graus.\n", num);
            else {
                res = tan(num * PI / 180.0);
                printf("tan(%.2lf graus) = %.4lf\n", num, res);
            }
            break;
        case 4: // Log10
            if (num <= 0) printf("Erro: Logaritmo apenas para numeros positivos.\n");
            else printf("log10(%.2lf) = %.4lf\n", num, log10(num));
            break;
        case 5: // Ln (log natural)
            if (num <= 0) printf("Erro: Logaritmo apenas para numeros positivos.\n");
            else printf("ln(%.2lf) = %.4lf\n", num, log(num)); // log() em C é base e
            break;
        case 6: // Raiz
            if (num < 0) printf("Erro: Nao existe raiz real de numero negativo.\n");
            else printf("sqrt(%.2lf) = %.4lf\n", num, sqrt(num));
            break;
        case 7: // Potência
            res = pow(num, expoente);
            printf("%.2lf elevado a %.2lf = %.2lf\n", num, expoente, res);
            break;
        default:
            printf("Opcao invalida.\n");
    }

    return 0;
}