#include <stdio.h>

int main(){

    float raio, perimetro;

    printf("Digite o valor do raio do circulo para descobrir seu perimetro!\n");
    scanf("%f", &raio);
    
    perimetro = 2*3.14159*raio;

    printf("O perimetro do circulo é de: %.4f", perimetro);

    return 0;
}