#include <stdio.h>

int main()
{
    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if(idade>=18){
        printf("Você já é maior de idade!");
    }
    return 0;
}
