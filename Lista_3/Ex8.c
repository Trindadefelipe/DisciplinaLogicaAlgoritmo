#include <stdio.h>
#include <math.h>

int main()
{
    int potencia;
    for (int i = 1; i <= 15; i++)
    {
        potencia = pow(i,2);
        printf("%d elevado ao quadrado = %d\n", i, potencia);
    }
    
    return 0;
}
