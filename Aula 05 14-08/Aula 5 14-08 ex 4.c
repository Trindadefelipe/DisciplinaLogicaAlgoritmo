#include <stdio.h>

int main()
{
    int idade, dias_vivo;

    printf("Digite por favor sua idade: ");
    scanf("%d", &idade);

    dias_vivo = idade*365;

    printf("Parabéns você está vivo por %d dias",dias_vivo);
    return 0;
}
