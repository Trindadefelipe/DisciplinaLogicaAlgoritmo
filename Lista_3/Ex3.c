#include <stdio.h>

int main()
{
    int num1, resultado;
    
    printf("Digite um numero para receber a tabuada de 1 a 10: \n");
    scanf("%d", &num1);

    for (int i = 1; i <= 10; i++)
    {
        resultado = num1 * i;
        printf("%d x %d = %d \n", num1, i, resultado);
    }
    
    return 0;
}
