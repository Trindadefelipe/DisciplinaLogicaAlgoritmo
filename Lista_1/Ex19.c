#include <stdio.h>

int main(){

    float nota1, nota2, nota3, peso1, peso2, peso3, media_ponderada;

    printf("Digite sua primeira nota e o peso da avaliação: ");
    scanf("%f", &nota1);
    scanf("%f", &peso1);
    printf("Digite sua segunda nota e o peso da avaliação: ");
    scanf("%f", &nota2);
    scanf("%f", &peso2);
    printf("Digite sua terceira nota e o peso da avaliação: ");
    scanf("%f", &nota3);
    scanf("%f", &peso3);

    media_ponderada = (nota1*peso1+nota2*peso2+nota3*peso3)/(peso1+peso2+peso3);

    printf("Sua media moderada na materia foi de: %.1f", media_ponderada);

    return 0;
}