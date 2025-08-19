#include <stdio.h>

int main(){

    float temp_celsius;
    float temp_fahren;

    printf("Qual a temperatura atual em Celsius nesse momento?\n");
    scanf("%f", &temp_celsius);

    temp_fahren = (temp_celsius*9/5)+32;

    printf("Uau, isso equivale a %.2f Fahrenheits!", temp_fahren);

    return 0;

}