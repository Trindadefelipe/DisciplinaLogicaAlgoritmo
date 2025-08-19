#include <stdio.h>

int main(){
    float nota1, nota2, nota3, media;

    printf("Digite a nota adquirida em cada uma das 3 provas para descobrir sua media!\n");
    scanf("%f", &nota1);
    scanf("%f", &nota2);
    scanf("%f", &nota3);

    media = (nota1+nota2+nota3)/3;

    printf("Sua media esse semestre foi de:%,2f", media);

return 0;

}