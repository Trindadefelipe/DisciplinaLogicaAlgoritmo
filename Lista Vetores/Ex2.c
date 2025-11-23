#include <stdio.h>

int main() {
    double temp[7];
    char *dias[] = {"Segunda", "Terca", "Quarta", "Quinta", "Sexta", "Sabado", "Domingo"};
    
    double soma = 0, media, maior, menor;
    int i, dia_maior = 0, dia_menor = 0, dias_acima_30 = 0;

    printf("=== Problema 2: Controle de Temperatura ===\n");
    printf("Digite as temperaturas maximas da semana:\n");

    
    for(i = 0; i < 7; i++) {
        printf("%s: ", dias[i]);
        scanf("%lf", &temp[i]);
        soma += temp[i];
    }

    
    maior = temp[0];
    menor = temp[0];

    
    for(i = 0; i < 7; i++) {
        
        if(temp[i] > maior) {
            maior = temp[i];
            dia_maior = i;
        }
        
        if(temp[i] < menor) {
            menor = temp[i];
            dia_menor = i;
        }

        if(temp[i] > 30) {
            dias_acima_30++;
        }
    }

    media = soma / 7.0;

    
    printf("\nTemperatura media: %.2lf C\n", media);
    printf("Dia mais quente: %s (%.1lf C)\n", dias[dia_maior], maior);
    printf("Dia mais frio: %s (%.1lf C)\n", dias[dia_menor], menor);
    printf("Dias acima de 30 C: %d dias\n", dias_acima_30);

    return 0;
}