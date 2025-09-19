#include <stdio.h>
#include <math.h>

int main()
{
    double resultado;
    for (int i = 1; i <= 10; i++)
    {
        resultado = pow(2,i);
        printf("2 elevado a %d = %.0lf \n", i, resultado);
    }
    
    
    return 0;
}
