#include <stdio.h>

int main(){
    int ano;
    int ano_atual;
    int idade;

    printf("Digite o ano em que voce nasceu:");
    scanf("%d", &ano);
    printf("Digite o ano atual:");
    scanf("%d", &ano_atual);

    idade = ano_atual-ano;

    printf("Voce tem %d anos!", idade);

    return 0;

}