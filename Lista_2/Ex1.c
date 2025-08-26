#include <stdio.h>

int main(){
    float num1;

    printf("Digite um número: ");
    scanf("%f", &num1);

    if(num1<0){
        printf("Esse número é negativo!");
    }
    else{
        printf("Esse número é positivo!");
    } 

    return 0;
}