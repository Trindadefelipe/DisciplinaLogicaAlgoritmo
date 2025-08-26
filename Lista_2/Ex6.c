#include <stdio.h>
#include <math.h>

int main()
{
    float nota;

    printf("Digite sua nota final: ");
    scanf("%f", &nota);

    if (nota>=7){
        printf("Parabéns você foi provado!");
    }
    else{
        printf("Você está reprovado!");
    }
    return 0;
}
