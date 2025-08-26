#include <stdio.h> 
#include <math.h>

int main()
{
    float num1;
    double raiz;

    printf("Digite um numero: ");
    scanf("%f", &num1);

    if(num1>0){
        raiz=sqrt(num1);
        printf("A raiz quadrada do número digitado é:%.2lf!",raiz );
    }
    return 0;

}
