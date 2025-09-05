#include <stdio.h>
#include <math.h>

int main()
{
    int num1;

    printf("Digite um numero inteiro para descobrirmos se é par ou impar: ");
    scanf("%d", &num1);

    if (num1%2 == 0)
    {
        printf("Par!");
    } else {
        printf("Impar!");
    }
    

    return 0;
}
