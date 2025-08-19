#include <stdio.h>

int main()
{
    int segundos, horas, minutos, restante;

    printf("Digite um tempo em segundos: ");
    scanf("%d", &segundos);

    horas = segundos/3600;
    segundos = segundos % 3600;
    minutos = segundos/60;
    restante = segundos % 60;

    printf("%d Horas %d Minutos %d Segundos!", horas, minutos, restante);
    return 0;
}
