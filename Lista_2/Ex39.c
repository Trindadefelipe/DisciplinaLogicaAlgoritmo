#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int d1, d2, d3, temp;

    srand(time(NULL));

    printf("=== 39. Jogo de Dados Triplo ===\n");
    
    d1 = rand() % 6 + 1;
    d2 = rand() % 6 + 1;
    d3 = rand() % 6 + 1;

    printf("Dados sorteados: [%d] [%d] [%d]\n", d1, d2, d3);

    if (d1 > d2) { temp = d1; d1 = d2; d2 = temp; }
    if (d1 > d3) { temp = d1; d1 = d3; d3 = temp; }
    if (d2 > d3) { temp = d2; d2 = d3; d3 = temp; }

    printf("Resultado: ");
    if (d1 == d2 && d2 == d3) {
        printf("TRIO! (Todos iguais)\n");
    } else if (d1 + 1 == d2 && d2 + 1 == d3) {
        printf("SEQUENCIA! (%d, %d, %d)\n", d1, d2, d3);
    } else if (d1 == d2 || d2 == d3 || d1 == d3) {
        printf("PAR! (Dois iguais)\n");
    } else {
        printf("TODOS DIFERENTES.\n");
    }

    return 0;
}