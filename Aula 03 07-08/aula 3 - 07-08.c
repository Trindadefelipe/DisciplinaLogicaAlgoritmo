#include <stdio.h>

int main(){
    int num_int;
    float num_dec;
    char palavra [10];
        printf("Escreva um numero inteiro\n");
        scanf("%d", &num_int);

        printf("Escreva um numero decimal\n");
        scanf("%f", &num_dec);

        printf("Escreva um caractere\n");
        scanf(" %s", &palavra);

        printf("O numero inteiro que voce digitou foi: %d\n", num_int);
        printf("O numero decimal que voce digitou foi: %f\n", num_dec);
        printf("O caractere que voce digitou foi: %s\n", palavra);

    return 0;
}
