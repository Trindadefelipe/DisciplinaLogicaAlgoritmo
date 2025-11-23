#include <stdio.h>
#include <math.h>

int main() {
    double lado1, lado2, lado3, ang1, ang2, ang3, ang1_g, ang2_g, ang3_g;

    printf("Digite o valor do lado do triangulo: \n");
    scanf("%lf", &lado1);
    printf("Digite o valor do lado do triangulo: \n");
    scanf("%lf", &lado2);
    printf("Digite o valor do lado do triangulo: \n");
    scanf("%lf", &lado3);
    
    // Verifica se os lados formam um triângulo válido
    // A soma de qualquer dois lados deve ser maior que o terceiro
    if (lado1 + lado2 > lado3 && lado2 + lado3 > lado1 && lado3 + lado1 > lado2) {
        printf("Triangulo valido!\n");

        // Classificação pelos lados:
        if (lado1 == lado2 && lado2 == lado3) {
            printf("Triangulo Equilatero!\n"); // Todos os lados iguais
        } else if (lado1 != lado2 && lado1 != lado3 && lado2 != lado3) {
            printf("Triangulo Escaleno!\n"); // Todos os lados diferentes
        } else {
            printf("Triangulo Isosceles!\n"); // Dois lados iguais
        }
        
        // Cálculo dos angulos usando Lei dos Cossenos:
        ang1 = (pow(lado2, 2) + pow(lado3, 2) - pow(lado1, 2)) / (2 * lado2 * lado3);
        ang1 = acos(ang1); // Converte para radianos
        
        ang2 = (pow(lado1, 2) + pow(lado3, 2) - pow(lado2, 2)) / (2 * lado1 * lado3);
        ang2 = acos(ang2); // Converte para radianos
        
        ang3 = (pow(lado1, 2) + pow(lado2, 2) - pow(lado3, 2)) / (2 * lado1 * lado2);
        ang3 = acos(ang3); // Converte para radianos

        // Convertendo de radianos para graus
        ang1_g = ang1 * 180 / M_PI;
        ang2_g = ang2 * 180 / M_PI;
        ang3_g = ang3 * 180 / M_PI;

        // Classificação por ÂNGULOS:
        if(ang1_g < 90 && ang2_g < 90 && ang3_g < 90) {
            printf("Triangulo Acutangulo! \n");
        } else if (fabs(ang1_g - 90) < 0.0001 || fabs(ang2_g - 90) < 0.0001 || fabs(ang3_g - 90) < 0.0001) {
            printf("Triangulo Retangulo! \n");
        } else {
            printf("Triangulo Obtusangulo! \n");
        }
    } else {
        printf("Triangulo Invalido!");
    }
    
    return 0;
}