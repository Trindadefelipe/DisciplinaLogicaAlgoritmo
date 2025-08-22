#include <stdio.h>
#include <math.h>

int main()
{
    int num1, num2;

    printf("Digite dois números inteiros por gentileza: \n");
    scanf("%d", &num1);
    scanf("%d", &num2);

    if (num1 % 2 == 0 && num2 % 2 == 0){
        printf("Ambos os números informados são pares!");
    }else if (num1 % 2 == 0 || num2 % 2 == 0){
        printf("Um dos dois números %d ou %d é par!", num1, num2);
    }else {
        printf("Nenhum dois números digitados é par!");
    }
    


    return 0;
}
